//
//
//#include "Factories.h"
////forwards : 
//#include "Utils.h"
//#include "imgui_extension.h"
//
//
////addings : 
//template<>
//void ResourceFactory<MaterialInstance>::addResourceForce(const FileHandler::CompletePath& path, const ID& hashKey)
//{
//	MaterialInstance* newResource = new MaterialInstance(); //makeNewMaterialInstance(path);
//	newResource->init(path, hashKey);
//
//	m_resources[path] = newResource;
//	m_resourceMapping[path] = hashKey;
//	m_resourcesFromHashKey[hashKey] = newResource;
//}
//
//template<>
//void ResourceFactory<MaterialInstance>::addResourceSoft(const FileHandler::CompletePath& path)
//{
//	MaterialInstance* newResource = new MaterialInstance(); //makeNewMaterialInstance(path);
//
//	ID newId = IDGenerator<Resource>::instance().lockID();
//	newResource->init(path, newId);
//
//	m_resources[path] = newResource;
//	m_resourceMapping[path] = newId;
//	m_resourcesFromHashKey[newId] = newResource;
//}
//
////Cube Texture
//template<>
//void ResourceFactory<CubeTexture>::initDefaults()
//{
//	auto newTex = new CubeTexture(255, 255, 255);
//	newTex->initGL();
//	newTex->name = "default";
//	addDefaultResource(newTex->name, newTex);
//}
//
////Textures
//template<>
//void ResourceFactory<Texture>::initDefaults()
//{
//	//default diffuse
//	auto newTex = new Texture(glm::vec3(255, 255, 255));
//	newTex->initGL();
//	addDefaultResource("default", newTex);
//
//	//default normal
//	newTex = new Texture(glm::vec3(0, 0, 125));
//	newTex->initGL();
//	addDefaultResource("defaultNormal", newTex);
//
//	//default specular
//	newTex = new Texture(glm::vec3(10, 10, 10));
//	newTex->initGL();
//	addDefaultResource("defaultSpecular", newTex);
//
//	//default emissive
//	newTex = new Texture(glm::vec3(255, 255, 255));
//	newTex->initGL();
//	addDefaultResource("defaultEmissive", newTex);
//
//	// Engine resources :
//	FileHandler::CompletePath pointLightsIconePath(Project::getEngineResourcesFolderPath().toString() + "/textures/" + "pointLightIcone.png");
//	newTex = new Texture(pointLightsIconePath);
//	newTex->initGL();
//	addDefaultResource("pointLightIcone", newTex);
//
//	FileHandler::CompletePath directionalLightsIconePath(Project::getEngineResourcesFolderPath().toString() + "/textures/" + "directionalLightIcone.png");
//	newTex = new Texture(directionalLightsIconePath);
//	newTex->initGL();
//	addDefaultResource("directionalLightIcone", newTex);
//
//	FileHandler::CompletePath spotLightsIconePath(Project::getEngineResourcesFolderPath().toString() + "/textures/" + "spotLightIcone.png");
//	newTex = new Texture(spotLightsIconePath);
//	newTex->initGL();
//	addDefaultResource("spotLightIcone", newTex);
//
//	FileHandler::CompletePath particleEmitterIconePath(Project::getEngineResourcesFolderPath().toString() + "/textures/" + "particleEmitterIcone.png");
//	newTex = new Texture(particleEmitterIconePath);
//	newTex->initGL();
//	addDefaultResource("particleEmitterIcone", newTex);
//}
//
//
////Materials
//template<>
//void ResourceFactory<MaterialInstance>::initDefaults()
//{
//	
//	MaterialInstance* newMat = new MaterialLit(*getProgramFactory().getDefault("lit"));
//	addDefaultResource("defaultLit", newMat);
//
//	newMat = new MaterialSkybox(*getProgramFactory().getDefault("skybox"));
//	addDefaultResource("defaultSkybox", newMat);
//
//	newMat = new MaterialUnlit(*getProgramFactory().getDefault("unlit"));
//	addDefaultResource("wireframe", newMat);
//
//	newMat = new MaterialInstancedUnlit(*getProgramFactory().getDefault("wireframeInstanced"));
//	addDefaultResource("wireframeInstanced", newMat);
//
//	newMat = new MaterialGrassField(*getProgramFactory().getDefault("grassField"));
//	addDefaultResource("grassfield", newMat);
//
//	newMat = new MaterialBillboard(*getProgramFactory().getDefault("billboard"));
//	addDefaultResource("billboard", newMat);
//
//	newMat = new MaterialParticles(*getProgramFactory().getDefault("particles"));
//	addDefaultResource("particles", newMat);
//
//	newMat = new MaterialParticlesCPU(*getProgramFactory().getDefault("particlesCPU"));
//	addDefaultResource("particlesCPU", newMat);
//
//	newMat = new MaterialParticleSimulation(*getProgramFactory().getDefault("particleSimulation"));
//	addDefaultResource("particleSimulation", newMat);
//
//	newMat = new MaterialDebugDrawer(*getProgramFactory().getDefault("debugDrawer"));
//	addDefaultResource("debugDrawer", newMat);
//
//	newMat = new MaterialBlit(*getProgramFactory().getDefault("blit"));
//	addDefaultResource("blit", newMat);
//
//	newMat = new MaterialResizedBlit(*getProgramFactory().getDefault("resizedBlit"));
//	addDefaultResource("resizedBlit", newMat);
//
//	newMat = new MaterialSimple3DDraw(*getProgramFactory().getDefault("simple3DDraw"));
//	addDefaultResource("simple3DDraw", newMat);
//}
//
////Mesh
//template<>
//void ResourceFactory<Mesh>::initDefaults()
//{
//	Mesh* cube = new Mesh(GL_TRIANGLES, (Mesh::USE_INDEX | Mesh::USE_VERTICES | Mesh::USE_NORMALS | Mesh::USE_UVS | Mesh::USE_TANGENTS));
//	cube->vertices = { 0.5,0.5,-0.5,  0.5,0.5,0.5,  0.5,-0.5,0.5,  0.5,-0.5,-0.5,
//		-0.5,0.5,-0.5,  -0.5,0.5,0.5,  -0.5,-0.5,0.5,  -0.5,-0.5,-0.5,
//		-0.5,0.5,0.5,  0.5,0.5,0.5,  0.5,-0.5,0.5,  -0.5,-0.5,0.5,
//		-0.5,0.5,-0.5,  0.5,0.5,-0.5,  0.5,-0.5,-0.5,  -0.5,-0.5,-0.5,
//		0.5,0.5,0.5, -0.5,0.5,0.5, -0.5,0.5,-0.5, 0.5,0.5,-0.5,
//		-0.5,-0.5,-0.5,  0.5,-0.5,-0.5,  0.5,-0.5,0.5,  -0.5,-0.5,0.5 };
//
//	cube->normals = { 1,0,0,  1,0,0,  1,0,0,  1,0,0,
//		-1,0,0,  -1,0,0,  -1,0,0,  -1,0,0,
//		0,0,1,  0,0,1,  0,0,1,  0,0,1,
//		0,0,-1,  0,0,-1,  0,0,-1,  0,0,-1,
//		0,1,0,  0,1,0,  0,1,0,  0,1,0,
//		0,-1,0,  0,-1,0,  0,-1,0,  0,-1,0 };
//
//	cube->tangents = { 0,0,1,  0,0,1,  0,0,1,  0,0,1,
//		0,0,1,  0,0,1,  0,0,1,  0,0,1,
//		-1,0,0,  -1,0,0,  -1,0,0,  -1,0,0,
//		1,0,0,  1,0,0,  1,0,0,  1,0,0,
//		1,0,0,  1,0,0,  1,0,0,  1,0,0,
//		-1,0,0,  -1,0,0,  -1,0,0,  -1,0,0 };
//
//	cube->uvs = { 0.0,0.0,  0.0,1.0,  1.0,1.0,  1.0,0.0,
//		0.0,0.0,  0.0,1.0,  1.0,1.0,  1.0,0.0,
//		0.0,0.0,  0.0,1.0,  1.0,1.0,  1.0,0.0,
//		0.0,0.0,  0.0,1.0,  1.0,1.0,  1.0,0.0,
//		0.0,0.0,  0.0,1.0,  1.0,1.0,  1.0,0.0,
//		0.0,0.0,  0.0,1.0,  1.0,1.0,  1.0,0.0 };
//
//	cube->triangleIndex = { 0, 1, 2, 2, 3, 0, 4, 5, 6, 6, 7, 4, 8, 9, 10, 10, 11, 8, 12, 13, 14, 14, 15, 12, 16, 17, 18, 18, 19, 16, 20, 21, 22, 22, 23, 20 };
//
//	cube->initGl();
//	cube->computeBoundingBox();
//
//
//	Mesh* cubeWireFrame = new Mesh(GL_LINE_STRIP, (Mesh::USE_INDEX | Mesh::USE_VERTICES));
//	cubeWireFrame->triangleIndex = { 0, 1, 2, 2, 1, 3, 4, 5, 6, 6, 5, 7, 8, 9, 10, 10, 9, 11, 12, 13, 14, 14, 13, 15, 16, 17, 18, 19, 17, 20, 21, 22, 23, 24, 25, 26, };
//	cubeWireFrame->uvs = { 0.f, 0.f, 0.f, 1.f, 1.f, 0.f, 1.f, 1.f, 0.f, 0.f, 0.f, 1.f, 1.f, 0.f, 1.f, 1.f, 0.f, 0.f, 0.f, 1.f, 1.f, 0.f, 1.f, 1.f, 0.f, 0.f, 0.f, 1.f, 1.f, 0.f, 1.f, 1.f, 0.f, 0.f, 0.f, 1.f, 1.f, 0.f,  1.f, 0.f,  1.f, 1.f,  0.f, 1.f,  1.f, 1.f,  0.f, 0.f, 0.f, 0.f, 1.f, 1.f,  1.f, 0.f, };
//	cubeWireFrame->vertices = { -0.5, -0.5, 0.5, 0.5, -0.5, 0.5, -0.5, 0.5, 0.5, 0.5, 0.5, 0.5, -0.5, 0.5, 0.5, 0.5, 0.5, 0.5, -0.5, 0.5, -0.5, 0.5, 0.5, -0.5, -0.5, 0.5, -0.5, 0.5, 0.5, -0.5, -0.5, -0.5, -0.5, 0.5, -0.5, -0.5, -0.5, -0.5, -0.5, 0.5, -0.5, -0.5, -0.5, -0.5, 0.5, 0.5, -0.5, 0.5, 0.5, -0.5, 0.5, 0.5, -0.5, -0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, -0.5, -0.5, -0.5, -0.5, -0.5, -0.5, 0.5, -0.5, 0.5, -0.5, -0.5, 0.5, -0.5, -0.5, -0.5, 0.5, -0.5, 0.5, 0.5 };
//	cubeWireFrame->normals = { 0, 0, 1, 0, 0, 1, 0, 0, 1, 0, 0, 1, 0, 1, 0, 0, 1, 0, 0, 1, 0, 0, 1, 0, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 1, 0, 0, 1, 0, 0, 1, 0, 0, 1, 0, 0, 1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, };
//	cubeWireFrame->initGl();
//	cubeWireFrame->computeBoundingBox();
//
//	std::vector<float> tmpVertices;
//	Mesh* capsuleWireFrame = new Mesh(GL_LINES, (Mesh::USE_VERTICES));
//	for (int i = 0; i < 10; i++) {
//		tmpVertices.push_back(0.5f*std::cos((2.f*glm::pi<float>()*i) / 10.f)); //x
//		float y = 0.5f*std::sin((2.f*glm::pi<float>()*i) / 10.f);
//		y = y > 0 ? y + 1.f : y - 1.f;
//		tmpVertices.push_back(y); //y
//		tmpVertices.push_back(0); //z
//	}
//	for (int i = 0; i < 10; i++) {
//		tmpVertices.push_back(0); //x
//		float y = 0.5f*std::cos((2.f*glm::pi<float>()*i) / 10.f);
//		y = y > 0 ? y + 1.f : y - 1.f;
//		tmpVertices.push_back(y); //y
//		tmpVertices.push_back(0.5f*std::sin((2.f*glm::pi<float>()*i) / 10.f)); //z
//	}
//	for (int i = 0; i < 10; i++) {
//		tmpVertices.push_back(0.5f*std::cos((2.f*glm::pi<float>()*i) / 10.f)); //x
//		tmpVertices.push_back(1.f); //y
//		tmpVertices.push_back(0.5f*std::sin((2.f*glm::pi<float>()*i) / 10.f)); //z
//	}
//	for (int i = 0; i < 10; i++) {
//		tmpVertices.push_back(0.5f*std::cos((2.f*glm::pi<float>()*i) / 10.f)); //x
//		tmpVertices.push_back(-1.f); //y
//		tmpVertices.push_back(0.5f*std::sin((2.f*glm::pi<float>()*i) / 10.f)); //z
//	}
//	for (int i = 0; i < 10; i++) {
//		tmpVertices.push_back(0); //x
//		tmpVertices.push_back(-1.f + (i / 9.f)*2.f); //y
//		tmpVertices.push_back(-0.5f); //z
//	}
//	for (int i = 0; i < 10; i++) {
//		tmpVertices.push_back(0); //x
//		tmpVertices.push_back(-1.f + (i / 9.f)*2.f); //y
//		tmpVertices.push_back(0.5f); //z
//	}
//	for (int i = 0; i < 10; i++) {
//		tmpVertices.push_back(-0.5); //x
//		tmpVertices.push_back(-1.f + (i / 9.f)*2.f); //y
//		tmpVertices.push_back(0); //z
//	}
//	for (int i = 0; i < 10; i++) {
//		tmpVertices.push_back(0.5); //x
//		tmpVertices.push_back(-1.f + (i / 9.f)*2.f); //y
//		tmpVertices.push_back(0); //z
//	}
//	//CapsuleWireFrame->triangleIndex = { };
//	//CapsuleWireFrame->uvs = { 0.f, 0.f, 0.f, 1.f, 1.f, 0.f, 1.f, 1.f, 0.f, 0.f, 0.f, 1.f, 1.f, 0.f, 1.f, 1.f, 0.f, 0.f, 0.f, 1.f, 1.f, 0.f, 1.f, 1.f, 0.f, 0.f, 0.f, 1.f, 1.f, 0.f, 1.f, 1.f, 0.f, 0.f, 0.f, 1.f, 1.f, 0.f,  1.f, 0.f,  1.f, 1.f,  0.f, 1.f,  1.f, 1.f,  0.f, 0.f, 0.f, 0.f, 1.f, 1.f,  1.f, 0.f, };
//	capsuleWireFrame->vertices = tmpVertices;
//	//CapsuleWireFrame->normals = { 0, 0, 1, 0, 0, 1, 0, 0, 1, 0, 0, 1, 0, 1, 0, 0, 1, 0, 0, 1, 0, 0, 1, 0, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 1, 0, 0, 1, 0, 0, 1, 0, 0, 1, 0, 0, 1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, };
//	capsuleWireFrame->initGl();
//	capsuleWireFrame->computeBoundingBox();
//
//	tmpVertices.clear();
//
//	for (int i = 0; i < 10; i++) {
//		tmpVertices.push_back(0.5f*std::cos((2.f*glm::pi<float>()*i) / 10.f)); //x
//		tmpVertices.push_back(0.5f*std::sin((2.f*glm::pi<float>()*i) / 10.f)); //y
//		tmpVertices.push_back(0); //z
//	}
//	for (int i = 0; i < 10; i++) {
//		tmpVertices.push_back(0.5f*std::cos((2.f*glm::pi<float>()*i) / 10.f)); //x
//		tmpVertices.push_back(0); //y
//		tmpVertices.push_back(0.5f*std::sin((2.f*glm::pi<float>()*i) / 10.f)); //z
//	}
//	for (int i = 0; i < 10; i++) {
//		tmpVertices.push_back(0); //x
//		tmpVertices.push_back(0.5f*std::cos((2.f*glm::pi<float>()*i) / 10.f)); //y
//		tmpVertices.push_back(0.5f*std::sin((2.f*glm::pi<float>()*i) / 10.f)); //z
//	}
//
//	Mesh* sphereWireFrame = new Mesh(GL_LINES, (Mesh::USE_VERTICES));
//	sphereWireFrame->vertices = tmpVertices;
//	sphereWireFrame->initGl();
//	sphereWireFrame->computeBoundingBox();
//	tmpVertices.clear();
//
//	Mesh* plane = new Mesh();
//	plane->triangleIndex = { 0, 1, 2, 0, 2, 3 };
//	plane->uvs = { 0.f, 0.f, 1.f, 0.f, 1.f, 1.f, 0.f, 1.f };
//	plane->vertices = { -0.5, 0.0, -0.5, 0.5, 0.0, -0.5, 0.5, 0.0, 0.5, -0.5, 0.0, 0.5 };
//	plane->normals = { 0, 1, 0, 0, 1, 0, 0, 1, 0, 0, 1, 0 };
//	plane->initGl();
//	plane->computeBoundingBox();
//
//	Mesh* quad = new Mesh(GL_TRIANGLES, (Mesh::USE_INDEX | Mesh::USE_NORMALS | Mesh::USE_UVS | Mesh::USE_VERTICES), 2);
//	quad->triangleIndex = { 0, 1, 2, 0, 2, 3 };
//	quad->uvs = { 0.f, 0.f, 1.f, 0.f, 1.f, 1.f, 0.f, 1.f };
//	quad->vertices = { -1.0, -1.0, 1.0, -1.0, 1.0, 1.0, -1.0, 1.0 };
//	quad->normals = { 0, 1, 0, 0, 1, 0, 0, 1, 0, 0, 1, 0 };
//	quad->initGl();
//	//quad->computeBoundingBox();
//
//	//addDefault("default", cube);
//	addDefaultResource("cube", cube);
//	addDefaultResource("cubeWireframe", cubeWireFrame);
//	addDefaultResource("capsuleWireframe", capsuleWireFrame);
//	addDefaultResource("sphereWireframe", sphereWireFrame);
//	addDefaultResource("plane", plane);
//	addDefaultResource("quad", quad);
//}
//
//void loadAllPrograms(ResourceFactory<Material>* programFactory, const FileHandler::Path& absolutePath, const FileHandler::Path& relativePath)
//{
//	std::vector<std::string> dirNames;
//	FileHandler::getAllDirNames(absolutePath, dirNames);
//
//	for (auto& dirName : dirNames)
//	{
//		loadAllPrograms(programFactory, FileHandler::Path(absolutePath.toString() + "/" + dirName), FileHandler::Path(absolutePath.toString() + "/" + dirName));
//	}
//
//	std::vector<std::string> fileNames;
//	FileHandler::getAllFileNames(absolutePath, fileNames);
//	std::string outExtention;
//
//	for (auto& fileNameAndExtention : fileNames)
//	{
//		//We only add files that engine understand
//		FileHandler::getExtentionFromExtendedFilename(fileNameAndExtention, outExtention);
//		if (FileHandler::getFileTypeFromExtention(outExtention) == FileHandler::FileType::SHADER_PROGRAM)
//		{
//			FileHandler::CompletePath shaderPath(absolutePath.toString() + "/" + fileNameAndExtention);
//			Material* newShaderProgram = new Material(shaderPath, Rendering::MaterialType::INTERNAL, true);
//			newShaderProgram->getIsDefaultResource();
//			ID newID = IDGenerator<Resource>::instance().lockID();
//			newShaderProgram->init(shaderPath, newID);
//			programFactory->addDefaultResource(shaderPath.getFilename(), newShaderProgram);
//		}
//	}
//}
//
////load all programs which are in "[projectPath]/shaders/"
//void ResourceFactory<Material>::initDefaults()
//{
//	FileHandler::Path shadersPath = FileHandler::Path(Project::getShaderFolderPath());
//	loadAllPrograms(this, shadersPath, FileHandler::Path(shadersPath.back(2)));
//}
//
//void initAllResourceFactories()
//{
//	// /!\ Keep this order. /!\
//
//	//Cube Texture
//	getResourceFactory<CubeTexture>().initDefaults();
//
//	//Textures
//	getResourceFactory<Texture>().initDefaults();
//
//	//Shader Programes
//	getResourceFactory<Material>().initDefaults();
//
//	//Materials
//	getResourceFactory<MaterialInstance>().initDefaults();
//
//	//Mesh
//	getResourceFactory<Mesh>().initDefaults();
//
//	//Animations : nothing by default
//}
//
//void clearAllResourceFactories()
//{
//	getMeshFactory().clear();
//	getMaterialFactory().clear();
//	getTextureFactory().clear();
//	getCubeTextureFactory().clear();
//	getProgramFactory().clear();
//	getAnimationStateMachineFactory().clear();
//}
//
////access helper
//ResourceFactory<Sungine::Animation::AnimationStateMachine>& getAnimationStateMachineFactory()
//{
//	return ResourceFactory<Sungine::Animation::AnimationStateMachine>::instance();
//}
//
//ResourceFactory<Material>& getProgramFactory()
//{
//	return ResourceFactory<Material>::instance();
//}
//
//ResourceFactory<Mesh>& getMeshFactory()
//{
//	return ResourceFactory<Mesh>::instance();
//}
//
//ResourceFactory<Texture>& getTextureFactory()
//{
//	return ResourceFactory<Texture>::instance();
//}
//
//ResourceFactory<CubeTexture>& getCubeTextureFactory()
//{
//	return ResourceFactory<CubeTexture>::instance();
//}
//
//ResourceFactory<MaterialInstance>& getMaterialFactory()
//{
//	return ResourceFactory<MaterialInstance>::instance();
//}
//
//ResourceFactory<SkeletalAnimation>& getSkeletalAnimationFactory()
//{
//	return ResourceFactory<SkeletalAnimation>::instance();
//}
//
//template<>
//ResourceType getResourceType<Sungine::Animation::AnimationStateMachine>()
//{
//	return ResourceType::ANIMATION_STATE_MACHINE;
//}
//
//template<>
//ResourceType getResourceType<Texture>()
//{
//	return ResourceType::TEXTURE;
//}
//
//template<>
//ResourceType getResourceType<CubeTexture>()
//{
//	return ResourceType::CUBE_TEXTURE;
//}
//
//template<>
//ResourceType getResourceType<Mesh>()
//{
//	return ResourceType::MESH;
//}
//
//template<>
//ResourceType getResourceType<SkeletalAnimation>()
//{
//	return ResourceType::SKELETAL_ANIMATION;
//}
//
//template<>
//ResourceType getResourceType<MaterialInstance>()
//{
//	return ResourceType::MATERIAL;
//}
//
//template<>
//ResourceType getResourceType<Material>()
//{
//	return ResourceType::SHADER_PROGRAM;
//}
//
//ResourceType getResourceTypeFromFileType(FileHandler::FileType fileType)
//{
//	switch (fileType)
//	{
//	case FileHandler::NONE:
//		return ResourceType::NONE;
//	case FileHandler::IMAGE:
//		return ResourceType::TEXTURE;
//	case FileHandler::CUBE_TEXTURE:
//		return ResourceType::CUBE_TEXTURE;
//	case FileHandler::MESH:
//		return ResourceType::MESH;
//	case FileHandler::SOUND:
//		return ResourceType::NONE; //TODO sound
//	case FileHandler::MATERIAL:
//		return ResourceType::MATERIAL;
//	case FileHandler::SHADER_PROGRAM:
//		return ResourceType::SHADER_PROGRAM;
//	case FileHandler::ANIMATION_STATE_MACHINE:
//		return ResourceType::ANIMATION_STATE_MACHINE;
//		break;
//	default:
//		break;
//	}
//}
//
//Resource* getResourceFromTypeAndCompletePath(ResourceType resourceType, const FileHandler::CompletePath& completePath)
//{
//	switch (resourceType)
//	{
//	case NONE:
//		PRINT_WARNING("Your are trying to use getResourceFromTypeAndCompletePath() on an unknown resource type. It will return null");
//		return nullptr;
//		break;
//	case SHADER_PROGRAM:
//		//PRINT_WARNING("Your are trying to use getResourceFromTypeAndCompletePath() on Material. It will return null");
//		return getResourceFactory<Material>().get(completePath);
//		break;
//	case TEXTURE:
//		return getResourceFactory<Texture>().get(completePath);
//		break;
//	case CUBE_TEXTURE:
//		return getResourceFactory<CubeTexture>().get(completePath);
//		break;
//	case MESH:
//		return getResourceFactory<Mesh>().get(completePath);
//		break;
//	case SKELETAL_ANIMATION:
//		PRINT_WARNING("Your are trying to use getResourceFromTypeAndCompletePath() on skeletal animation. It will return null");
//		return nullptr;
//		break;
//	case MATERIAL:
//		return getResourceFactory<MaterialInstance>().get(completePath);
//		break;
//	case ANIMATION_STATE_MACHINE:
//		return getResourceFactory<Sungine::Animation::AnimationStateMachine>().get(completePath);
//		break;
//	default:
//		assert(false && "wrong type.");
//		break;
//	}
//}
//
//void addResourceToFactory(const FileHandler::CompletePath& completePath)
//{
//	ResourceType resourceType = getResourceTypeFromFileType(completePath.getFileType());
//
//	switch (resourceType)
//	{
//	case NONE:
//		break;
//	case TEXTURE:
//		getResourceFactory<Texture>().addResourceSoft(completePath);
//		break;
//	case CUBE_TEXTURE:
//		getResourceFactory<CubeTexture>().addResourceSoft(completePath);
//		break;
//	case MESH:
//		getResourceFactory<Mesh>().addResourceSoft(completePath);
//		break;
//	case SKELETAL_ANIMATION:
//		//getResourceFactory<SkeletalAnimation>().add(completePath); //TODO
//		break;
//	case MATERIAL:
//		getResourceFactory<MaterialInstance>().addResourceSoft(completePath);
//		break;
//	case SHADER_PROGRAM:
//		getResourceFactory<Material>().addResourceSoft(completePath);
//		break;
//	case ANIMATION_STATE_MACHINE:
//		getResourceFactory<Sungine::Animation::AnimationStateMachine>().addResourceSoft(completePath);
//		break;
//	default:
//		assert(false && "wrong type.");
//		break;
//	}
//}
//
//void renameResourceInFactory(const FileHandler::CompletePath& oldResourcePath, const FileHandler::CompletePath& newResourcePath)
//{
//	assert(oldResourcePath.getFileType() == newResourcePath.getFileType());
//
//	ResourceType resourceType = getResourceTypeFromFileType(oldResourcePath.getFileType());
//
//	switch (resourceType)
//	{
//	case NONE:
//		break;
//	case SHADER_PROGRAM:
//		//getResourceFactory<Material>().changeResourceKey(oldResourcePath, newResourcePath);
//		//std::cout << "warning : can't edit shaderProgram factory ! in : renameResourceInFactory()"<<std::endl;
//		getResourceFactory<Material>().changeResourceKey(oldResourcePath, newResourcePath);
//		break;
//	case TEXTURE:
//		getResourceFactory<Texture>().changeResourceKey(oldResourcePath, newResourcePath);
//		break;
//	case CUBE_TEXTURE:
//		getResourceFactory<CubeTexture>().changeResourceKey(oldResourcePath, newResourcePath);
//		break;
//	case MESH:
//		getResourceFactory<Mesh>().changeResourceKey(oldResourcePath, newResourcePath);
//		break;
//	case SKELETAL_ANIMATION:
//		//getResourceFactory<SkeletalAnimation>().changeResourceKey(oldResourcePath, newResourcePath); //TODO
//		break;
//	case MATERIAL:
//		getResourceFactory<MaterialInstance>().changeResourceKey(oldResourcePath, newResourcePath);
//		break;
//	case ANIMATION_STATE_MACHINE:
//		getResourceFactory<Sungine::Animation::AnimationStateMachine>().changeResourceKey(oldResourcePath, newResourcePath);
//		break;
//	default:
//		assert(false && "wrong type.");
//		break;
//	}
//}
//
//void removeResourceFromFactory(const FileHandler::CompletePath& resourcePath)
//{
//	ResourceType resourceType = getResourceTypeFromFileType(resourcePath.getFileType());
//
//	switch (resourceType)
//	{
//	case NONE:
//		break;
//	case SHADER_PROGRAM:
//		//getResourceFactory<Material>().erase(resourcePath);
//		//std::cout << "warning : can't edit shaderProgram factory ! in : renameResourceInFactory()" << std::endl;
//		getResourceFactory<Material>().erase(resourcePath);
//		break;
//	case TEXTURE:
//		getResourceFactory<Texture>().erase(resourcePath);
//		break;
//	case CUBE_TEXTURE:
//		getResourceFactory<CubeTexture>().erase(resourcePath);
//		break;
//	case MESH:
//		getResourceFactory<Mesh>().erase(resourcePath);
//		break;
//	case SKELETAL_ANIMATION:
//		//getResourceFactory<SkeletalAnimation>().erase(resourcePath); //TODO
//		break;
//	case MATERIAL:
//		getResourceFactory<MaterialInstance>().erase(resourcePath);
//		break;
//	case ANIMATION_STATE_MACHINE:
//		getResourceFactory<Sungine::Animation::AnimationStateMachine>().erase(resourcePath);
//		break;
//	default:
//		assert(false && "wrong type.");
//		break;
//	}
//}
//
//void removeAllResourcesFromFactories()
//{
//	getResourceFactory<Material>().clear();
//	getResourceFactory<Texture>().clear();
//	getResourceFactory<CubeTexture>().clear();
//	getResourceFactory<Mesh>().clear();
//	getResourceFactory<SkeletalAnimation>().clear();
//	getResourceFactory<MaterialInstance>().clear();
//	getResourceFactory<Sungine::Animation::AnimationStateMachine>().clear();
//}
//
//template<>
//inline const std::string& getResourceExtention<MaterialInstance>()
//{
//	return ".mat";
//}
//
//void loadResourcesInAllFactories(const Json::Value& rootResources)
//{
//	getMeshFactory().load(rootResources["meshFactory"]);
//	getTextureFactory().load(rootResources["textureFactory"]);
//	getCubeTextureFactory().load(rootResources["cubeTextureFactory"]);
//	getMaterialFactory().load(rootResources["materialFactory"]);
//	getProgramFactory().load(rootResources["programFactory"]);
//	getProgramFactory().load(rootResources["animationStateMachineFactory"]);
//
//	resolvePointersLoadingInFactories();
//}
//
//void saveResourcesInAllFactories(Json::Value& rootResources)
//{
//	getMeshFactory().save(rootResources);
//	getTextureFactory().save(rootResources);
//	getCubeTextureFactory().save(rootResources);
//	getMaterialFactory().save(rootResources);
//	getProgramFactory().save(rootResources);
//	getAnimationStateMachineFactory().save(rootResources);
//}
//
//void resolvePointersLoadingInFactories()
//{
//	getMeshFactory().resolvePointersLoading();
//	getTextureFactory().resolvePointersLoading();
//	getCubeTextureFactory().resolvePointersLoading();
//	getMaterialFactory().resolvePointersLoading();
//	getProgramFactory().resolvePointersLoading();
//	getAnimationStateMachineFactory().resolvePointersLoading();
//}
