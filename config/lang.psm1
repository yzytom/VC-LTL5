$LCID=[globalization.cultureinfo]::CurrentUICulture.LCID
if($LCID -notin 1033,2052){
    $LCID=1033
}
Import-Module "$PSScriptRoot\$LCID\config.strings.psm1"
Export-ModuleMember -Function Update-Lang1,Update-Lang2 -Alias Update-Lang1,Update-Lang2