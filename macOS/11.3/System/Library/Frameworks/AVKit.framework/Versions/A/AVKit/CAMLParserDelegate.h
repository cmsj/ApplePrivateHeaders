/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:51 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AVKit.framework/Versions/A/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CAMLParserDelegate <NSObject>
@optional
-(id)CAMLParser:(id)arg1 resourceForURL:(id)arg2;
-(void)CAMLParser:(id)arg1 didLoadResource:(id)arg2 fromURL:(id)arg3;
-(id)CAMLParser:(id)arg1 didFailToLoadResourceFromURL:(id)arg2;
-(Class)CAMLParser:(id)arg1 didFailToFindClassWithName:(id)arg2;
-(void)CAMLParser:(id)arg1 evaluateScriptElement:(id)arg2 sourceURL:(id)arg3 lineNumber:(unsigned)arg4;
-(id)CAMLParser:(id)arg1 evaluateScriptValue:(id)arg2 sourceURL:(id)arg3 lineNumber:(unsigned)arg4;
-(void)CAMLParser:(id)arg1 formatWarningString:(const char*)arg2 arguments:(_va_list_tag*)arg3 lineNumber:(unsigned long long)arg4;
-(void)CAMLParser:(id)arg1 formatErrorString:(const char*)arg2 arguments:(_va_list_tag*)arg3 lineNumber:(unsigned long long)arg4;

@end

