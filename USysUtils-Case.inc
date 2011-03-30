function UpCase(ACh:AnsiChar):AnsiChar; overload;
begin
 Result:=ACh;
 if (ACh>='a') and (ACh<='z') then Dec(Result,32)
 else
 Result:=ACh
end;

function UpCase(AStr:AnsiString):AnsiString; overload;
var
 LI:Integer;
begin
 Result:=AStr;
 for LI:=1 to Length(Result) do
  Result[LI]:=UpCase(Result[LI]);
end;

function LowCase(ACh:AnsiChar):AnsiChar; overload;
begin
 Result:=ACh;
 if (ACh>='A') and (ACh<='Z') then Inc(Result,32)
 else
 Result:=ACh
end;

function LowCase(AStr:AnsiString):AnsiString; overload;
var
 LI:Integer;
begin
 Result:=AStr;
 for LI:=1 to Length(Result) do
  Result[LI]:=LowCase(Result[LI]);
end;

function ChangeCase(ACh:AnsiChar):AnsiChar; overload;
begin
 Result:=ACh;
 if (ACh>='A') and (ACh<='Z') then Inc(Result,32)
 else if (ACh>='a') and (ACh<='z') then Dec(Result,32)
 else
  Result:=ACh
end;

function ChangeCase(AStr:AnsiString):AnsiString; overload;
var
 LI:Integer;
begin
 Result:=AStr;
 for LI:=1 to Length(Result) do
  Result[LI]:=ChangeCase(Result[LI]);
end;


