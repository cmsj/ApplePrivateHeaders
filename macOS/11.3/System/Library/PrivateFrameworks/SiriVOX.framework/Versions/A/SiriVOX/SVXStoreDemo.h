/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SiriVOX.framework/Versions/A/SiriVOX
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriVOX/SiriVOX-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface SVXStoreDemo : NSObject <NSCopying, NSSecureCoding> {

	float _outputVolume;
	long long _transcriptID;
	NSString* _languageCode;
	long long _gender;

}

@property (nonatomic,readonly) long long transcriptID;                    //@synthesize transcriptID=_transcriptID - In the implementation block
@property (nonatomic,copy,readonly) NSString * languageCode;              //@synthesize languageCode=_languageCode - In the implementation block
@property (nonatomic,readonly) long long gender;                          //@synthesize gender=_gender - In the implementation block
@property (nonatomic,readonly) float outputVolume;                        //@synthesize outputVolume=_outputVolume - In the implementation block
+(char)supportsSecureCoding;
+(id)newWithBuilder:(/*^block*/id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)languageCode;
-(long long)gender;
-(float)outputVolume;
-(id)_descriptionWithIndent:(unsigned long long)arg1 ;
-(id)mutatedCopyWithMutator:(/*^block*/id)arg1 ;
-(long long)transcriptID;
-(id)initWithTranscriptID:(long long)arg1 languageCode:(id)arg2 gender:(long long)arg3 outputVolume:(float)arg4 ;
@end

