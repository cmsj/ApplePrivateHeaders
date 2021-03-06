/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:06 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/Versions/A/DifferentialPrivacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDictionary;

@interface _DPAlgorithmParameters : NSObject {

	NSString* _serverAlgorithmString;
	NSDictionary* _parameterDictionary;

}

@property (nonatomic,copy,readonly) NSString * serverAlgorithmString;              //@synthesize serverAlgorithmString=_serverAlgorithmString - In the implementation block
@property (nonatomic,readonly) NSDictionary * parameterDictionary;                 //@synthesize parameterDictionary=_parameterDictionary - In the implementation block
+(id)parametersFromFile:(id)arg1 ;
+(id)algorithmParametersFromDictionary:(id)arg1 ;
+(id)algorithmParametersForKey:(id)arg1 ;
+(id)allAlgorithmNames;
-(id)description;
-(id)init;
-(id)initWithDictionary:(id)arg1 ;
-(NSDictionary *)parameterDictionary;
-(NSString *)serverAlgorithmString;
@end

