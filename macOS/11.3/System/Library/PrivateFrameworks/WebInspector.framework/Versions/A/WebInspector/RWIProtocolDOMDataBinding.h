/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:29 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/Versions/A/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString;

@interface RWIProtocolDOMDataBinding : RWIProtocolJSONObject

@property (nonatomic,copy) NSString * binding; 
@property (nonatomic,copy) NSString * value; 
@property (nonatomic,copy) NSString * type; 
-(void)setType:(NSString *)arg1 ;
-(NSString *)type;
-(NSString *)value;
-(NSString *)binding;
-(void)setValue:(NSString *)arg1 ;
-(void)setBinding:(NSString *)arg1 ;
-(id)initWithBinding:(id)arg1 value:(id)arg2 ;
@end
