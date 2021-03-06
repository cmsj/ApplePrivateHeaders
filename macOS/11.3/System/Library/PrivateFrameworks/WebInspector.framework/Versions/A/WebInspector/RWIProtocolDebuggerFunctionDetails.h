/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:29 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/Versions/A/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class RWIProtocolDebuggerLocation, NSString, NSArray;

@interface RWIProtocolDebuggerFunctionDetails : RWIProtocolJSONObject

@property (nonatomic,retain) RWIProtocolDebuggerLocation * location; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSString * displayName; 
@property (nonatomic,copy) NSArray * scopeChain; 
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(NSString *)displayName;
-(RWIProtocolDebuggerLocation *)location;
-(void)setDisplayName:(NSString *)arg1 ;
-(id)initWithLocation:(id)arg1 ;
-(void)setLocation:(RWIProtocolDebuggerLocation *)arg1 ;
-(void)setScopeChain:(NSArray *)arg1 ;
-(NSArray *)scopeChain;
@end

