/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/NaturalLanguage.framework/Versions/A/NaturalLanguage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NaturalLanguage/NaturalLanguage-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary;

@interface NLModelConfiguration : NSObject <NSCopying, NSSecureCoding> {

	long long _type;
	unsigned long long _revision;
	NSString* _language;
	NSDictionary* _options;

}

@property (readonly) long long type; 
@property (copy,readonly) NSString * language; 
@property (readonly) unsigned long long revision; 
+(char)supportsSecureCoding;
+(id)defaultModelConfigurationForType:(long long)arg1 options:(id)arg2 error:(id*)arg3 ;
+(unsigned long long)currentRevisionForType:(long long)arg1 ;
+(id)supportedRevisionsForType:(long long)arg1 ;
+(id)defaultModelConfigurationForType:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)type;
-(id)options;
-(NSString *)language;
-(unsigned long long)revision;
-(id)embeddingData;
-(id)initWithModelType:(long long)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)embeddingURL;
-(id)embeddingModel;
@end
