# unreal._ObjectBase
#   https://api.unrealengine.com/INT/PythonAPI/class/_ObjectBase.html

import unreal



# object_to_cast: obj unreal.Object : The object you want to cast
# object_class: obj unreal.Class : The class you want to cast the object into
def cast(object_to_cast=None, object_class=None):
    try:
        return object_class.cast(object_to_cast)
    except:
        return None




# Cpp ########################################################################################################################################################################################




# Note: Also work using the command : help(unreal.StaticMesh)
# unreal_class: obj : The class you want to know the properties
# return: str List : The available properties (formatted the way you can directly use them to get their values)
def getAllProperties(unreal_class=None):
    return unreal.CppLib.get_all_properties(unreal_class)
