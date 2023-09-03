function Update-Lang1($lang){
    $lang.Add("ERROR_VC_LTL_CANNOT_FOUND_VC_LTL","找不到VC-LTL!")
    $lang.Add("ERROR_VC_LTL_GOT_IT","已经添加VC-LTL了！")
}
function Update-Lang2($lang){
    $lang.Add("ERROR_VC_LTL_DONOT_USE_THIS_FILE","请不要直接使用此脚本，应该使用VC-LTL helper for nmake。")
    $lang.Add("ERROR_VC_LTL_CANNOT_FOUND_INCLUDE_ENV","找不到环境变量INCLUDE，请在Developer PowerShell执行后调用此脚本。")
    $lang.Add("ERROR_VC_LTL_CANNOT_FOUND_LIB_ENV","找不到环境变量LIB，请在Developer PowerShell执行后调用此脚本。")
    $lang.Add("ERROR_VC_LTL_NOT_SUPPORT_PLATFORM_TOOLSET","VC-LTL仅支持VS 2015、2017、2019以及2022。")
    $lang.Add("ERROR_VC_LTL_NOT_SUPPORT_PLATFORM","VC-LTL CMD脚本不支持体系 : $Platform")
    $lang.Add("ERROR_VC_LTL_FILE_MISSING","VC-LTL不找不到lib文件，请从 https://github.com/Chuyu-Team/VC-LTL5/releases/latest 下载完整二进制文件然后继续。")
}