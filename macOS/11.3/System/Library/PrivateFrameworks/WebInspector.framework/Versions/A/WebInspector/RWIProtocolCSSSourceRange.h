/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:29 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/Versions/A/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@interface RWIProtocolCSSSourceRange : RWIProtocolJSONObject

@property (assign,nonatomic) int startLine; 
@property (assign,nonatomic) int startColumn; 
@property (assign,nonatomic) int endLine; 
@property (assign,nonatomic) int endColumn; 
-(int)endLine;
-(void)setStartLine:(int)arg1 ;
-(void)setStartColumn:(int)arg1 ;
-(int)startLine;
-(int)startColumn;
-(void)setEndLine:(int)arg1 ;
-(void)setEndColumn:(int)arg1 ;
-(id)initWithStartLine:(int)arg1 startColumn:(int)arg2 endLine:(int)arg3 endColumn:(int)arg4 ;
-(int)endColumn;
@end

