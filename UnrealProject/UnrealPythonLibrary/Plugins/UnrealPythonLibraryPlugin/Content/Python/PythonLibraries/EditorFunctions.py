# unreal.SystemLibrary
#   https://api.unrealengine.com/INT/PythonAPI/class/SystemLibrary.html

import unreal
import random


# active_viewport_only: bool : If True, will only affect the active viewport
# actor: obj unreal.Actor : The actor you want to snap to
def focusViewportOnActor(active_viewport_only=True, actor=None):
    command = 'CAMERA ALIGN'
    if active_viewport_only:
        command += ' ACTIVEVIEWPORTONLY'
    if actor:
        command += ' NAME=' + actor.get_name()
    executeConsoleCommand(command)




# Cpp ########################################################################################################################################################################################




# Note: This is the real Python function but it does not work in editor : unreal.SystemLibrary.execute_console_command(unreal.EditorLevelLibrary.get_editor_world(), 'stat unit')
# console_command: str : The console command
def executeConsoleCommand(console_command=''):
    unreal.CppLib.execute_console_command(console_command)


# return: int : The index of the active viewport
def getActiveViewportIndex():
    return unreal.CppLib.get_active_viewport_index()

# viewport_index: int : The index of the viewport you want to affect
# location: obj unreal.Vector : The viewport location
# rotation: obj unreal.Rotator : The viewport rotation
def setViewportLocationAndRotation(viewport_index=1, location=unreal.Vector(), rotation=unreal.Rotator()):
    unreal.CppLib.set_viewport_location_and_rotation(viewport_index, location, rotation)

# viewport_index: int : The index of the viewport you want to affect
# actor: obj unreal.Actor : The actor you want to snap to
def snapViewportToActor(viewport_index=1, actor=None):
    setViewportLocationAndRotation(viewport_index, actor.get_actor_location(), actor.get_actor_rotation())
