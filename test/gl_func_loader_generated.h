#if !defined(gl_func_loader_generated_INCLUDE_H)
#define gl_func_loader_generated_INCLUDE_H)





/////////////////////////////////////////////////////////
//~ Function typedefs
typedef void GLGENVERTEXARRAYS(GLsizei n, GLuint *arrays);
typedef void GLDELETEFRAMEBUFFERS(n, const GLuint *framebuffers);
typedef void (APIENTRY *DEBUGPROC)(GLenum source, GLenum type, GLuint id, GLenum severity, GLsizei length, const GLchar* message, const void* userParam);
#if defined(BUILD_DEBUG)
typedef void GLGETSHADERIV(GLuint shader, GLenum pname, GLint *params);
#endif // BUILD_DEBUG




/////////////////////////////////////////////////////////
//~ Function pointers
#define gl_func static

gl_func GLGENVERTEXARRAYS *glGenVertexArrays;
gl_func GLDELETEFRAMEBUFFERS *glDeleteFrameBuffers;
#if defined(BUILD_DEBUG)
typedef void GLGETSHADERIV(GLuint shader, GLenum pname, GLint *params);
#endif // BUILD_DEBUG




/////////////////////////////////////////////////////////
//~ Loader Function
inline_function void
R_GL_InitFunctionPointers(void)
{
	glGenVertexArrays = (GLGENVERTEXARRAYS *)R_GL_GetGLFuncAddress("glGenVertexArrays");
	glDeleteFrameBuffers = (GLDELETEFRAMEBUFFERS *)R_GL_GetGLFuncAddress("glDeleteFrameBuffers");
#if defined(BUILD_DEBUG)
	glGetShaderiv = (GLGETSHADERIV *)R_GL_GetGLFuncAddress("glGetShaderiv");
#endif // BUILD_DEBUG
}




/////////////////////////////////////////////////////////
//~ End of generated file
#endif // gl_func_loader_generated_INCLUDE_H
