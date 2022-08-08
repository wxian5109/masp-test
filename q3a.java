Public void upload(HTTPServletRequest request) throws ServletException {
    
    MultipartHttpServletRequest mRequest = (MultipartHttpServletRequest) request;
    String next = (String) mRequest.getFileNames().next();
    MultipartFile file = mRequest.getFile(next);
    if(file==null) return;

    if(fileName !=null){
    if (fileName.endsWith(.docx) || fileName.endsWith(".pptx"))
    || fileName.endsWith(".pdf") || fileName.endsWith(".xlsx")){

    /*file upload routine*/
    
        }else
        throw new ServletException("error");
    }
}