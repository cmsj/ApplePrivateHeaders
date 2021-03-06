/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ExchangeWebServices.framework/Versions/A/ExchangeWebServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/XSDefinitionProvider.h>

@class NSArray, NSString;

@interface EWSAttachmentResponseShapeType : NSObject <XSDefinitionProvider> {

	char _IncludeMimeContent;
	long long _BodyType;
	NSArray* _AdditionalProperties;

}

@property (assign,nonatomic) char IncludeMimeContent;                   //@synthesize IncludeMimeContent=_IncludeMimeContent - In the implementation block
@property (assign,nonatomic) long long BodyType;                        //@synthesize BodyType=_BodyType - In the implementation block
@property (nonatomic,copy) NSArray * AdditionalProperties;              //@synthesize AdditionalProperties=_AdditionalProperties - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)definition;
-(void)setAdditionalProperties:(NSArray *)arg1 ;
-(void)setBodyType:(long long)arg1 ;
-(char)IncludeMimeContent;
-(void)setIncludeMimeContent:(char)arg1 ;
-(long long)BodyType;
-(NSArray *)AdditionalProperties;
@end

