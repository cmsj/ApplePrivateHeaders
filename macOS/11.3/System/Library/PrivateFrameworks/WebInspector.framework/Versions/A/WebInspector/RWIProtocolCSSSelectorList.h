/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:29 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/Versions/A/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSArray, NSString, RWIProtocolCSSSourceRange;

@interface RWIProtocolCSSSelectorList : RWIProtocolJSONObject

@property (nonatomic,copy) NSArray * selectors; 
@property (nonatomic,copy) NSString * text; 
@property (nonatomic,retain) RWIProtocolCSSSourceRange * range; 
-(RWIProtocolCSSSourceRange *)range;
-(void)setRange:(RWIProtocolCSSSourceRange *)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)setSelectors:(NSArray *)arg1 ;
-(id)initWithSelectors:(id)arg1 text:(id)arg2 ;
-(NSArray *)selectors;
@end

