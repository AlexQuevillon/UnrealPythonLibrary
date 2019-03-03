# unreal.MovieSceneSequence
#   https://api.unrealengine.com/INT/PythonAPI/class/MovieSceneSequence.html

# unreal.LevelSequence
#   https://api.unrealengine.com/INT/PythonAPI/class/LevelSequence.html

# unreal.SequencerBindingProxy
#   https://api.unrealengine.com/INT/PythonAPI/class/SequencerBindingProxy.html

import unreal



# sequence_path: str : The level sequence asset path
# actor: obj unreal.Actor : The actor you want to add into (or get from) the sequence asset
# return: obj unreal.SequencerBindingProxy : The actor binding
def getOrAddPossessableInSequenceAsset(sequence_path='', actor=None):
    sequence_asset = unreal.LevelSequence.cast(unreal.load_asset(sequence_path))
    possessable = sequence_asset.add_possessable(object_to_possess=actor)
    return possessable


# animation_path: str : The animation asset path
# possessable: obj unreal.SequencerBindingProxy : The actor binding you want to add the animation on
# return: obj unreal.SequencerBindingProxy : The actor binding
def addSkeletalAnimationTrackOnPossessable(animation_path='', possessable=None):
    # Get Animation
    animation_asset = unreal.AnimSequence.cast(unreal.load_asset(animation_path))
    params = unreal.MovieSceneSkeletalAnimationParams()
    params.set_editor_property('Animation', animation_asset)
    # Add track
    animation_track = possessable.add_track(track_type=unreal.MovieSceneSkeletalAnimationTrack)
    # Add section
    animation_section = animation_track.add_section()
    animation_section.set_editor_property('Params', params)
    animation_section.set_range(0, animation_asset.get_editor_property('sequence_length'))


def addSkeletalAnimationTrackOnActor_EXAMPLE():
    sequence_path = '/Game/ExampleAssets/Sequences/SEQ_Test'
    animation_path = '/Game/ExampleAssets/Animations/AN_Tutorial_Idle'
    actor_in_world = unreal.GameplayStatics.get_all_actors_of_class(unreal.EditorLevelLibrary.get_editor_world(), unreal.SkeletalMeshActor)()[0]
    possessable_in_sequence = getOrAddPossessableInSequenceAsset(sequence_path, actor_in_world)
    addSkeletalAnimationTrackOnPossessable(animation_path, possessable_in_sequence)


