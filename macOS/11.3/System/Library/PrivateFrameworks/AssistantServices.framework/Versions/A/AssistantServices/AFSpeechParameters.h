/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/Versions/A/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray, NSData, NSDictionary, NSURL, CLLocation;

@interface AFSpeechParameters : NSObject <NSCopying, NSSecureCoding> {

	char _narrowband;
	char _detectUtterances;
	char _censorSpeech;
	char _farField;
	char _secureOfflineOnly;
	char _shouldStoreAudioOnDevice;
	NSString* _language;
	NSString* _interactionIdentifier;
	NSString* _task;
	NSArray* _loggingContext;
	NSString* _applicationName;
	NSData* _profile;
	NSDictionary* _overrides;
	NSURL* _modelOverrideURL;
	NSURL* _originalAudioFileURL;
	double _maximumRecognitionDuration;
	NSString* _inputOrigin;
	CLLocation* _location;
	NSArray* _jitGrammar;

}

@property (nonatomic,copy,readonly) NSString * language;                           //@synthesize language=_language - In the implementation block
@property (nonatomic,copy,readonly) NSString * interactionIdentifier;              //@synthesize interactionIdentifier=_interactionIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * task;                               //@synthesize task=_task - In the implementation block
@property (nonatomic,copy,readonly) NSArray * loggingContext;                      //@synthesize loggingContext=_loggingContext - In the implementation block
@property (nonatomic,copy,readonly) NSString * applicationName;                    //@synthesize applicationName=_applicationName - In the implementation block
@property (nonatomic,copy,readonly) NSData * profile;                              //@synthesize profile=_profile - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * overrides;                      //@synthesize overrides=_overrides - In the implementation block
@property (nonatomic,copy,readonly) NSURL * modelOverrideURL;                      //@synthesize modelOverrideURL=_modelOverrideURL - In the implementation block
@property (nonatomic,copy,readonly) NSURL * originalAudioFileURL;                  //@synthesize originalAudioFileURL=_originalAudioFileURL - In the implementation block
@property (nonatomic,readonly) char narrowband;                                    //@synthesize narrowband=_narrowband - In the implementation block
@property (nonatomic,readonly) char detectUtterances;                              //@synthesize detectUtterances=_detectUtterances - In the implementation block
@property (nonatomic,readonly) char censorSpeech;                                  //@synthesize censorSpeech=_censorSpeech - In the implementation block
@property (nonatomic,readonly) char farField;                                      //@synthesize farField=_farField - In the implementation block
@property (nonatomic,readonly) char secureOfflineOnly;                             //@synthesize secureOfflineOnly=_secureOfflineOnly - In the implementation block
@property (nonatomic,readonly) char shouldStoreAudioOnDevice;                      //@synthesize shouldStoreAudioOnDevice=_shouldStoreAudioOnDevice - In the implementation block
@property (nonatomic,readonly) double maximumRecognitionDuration;                  //@synthesize maximumRecognitionDuration=_maximumRecognitionDuration - In the implementation block
@property (nonatomic,copy,readonly) NSString * inputOrigin;                        //@synthesize inputOrigin=_inputOrigin - In the implementation block
@property (nonatomic,copy,readonly) CLLocation * location;                         //@synthesize location=_location - In the implementation block
@property (nonatomic,copy,readonly) NSArray * jitGrammar;                          //@synthesize jitGrammar=_jitGrammar - In the implementation block
+(char)supportsSecureCoding;
+(id)newWithBuilder:(/*^block*/id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CLLocation *)location;
-(NSString *)language;
-(NSString *)applicationName;
-(NSString *)task;
-(NSData *)profile;
-(id)_descriptionWithIndent:(unsigned long long)arg1 ;
-(NSString *)inputOrigin;
-(char)censorSpeech;
-(char)detectUtterances;
-(char)farField;
-(double)maximumRecognitionDuration;
-(NSDictionary *)overrides;
-(id)mutatedCopyWithMutator:(/*^block*/id)arg1 ;
-(NSString *)interactionIdentifier;
-(char)secureOfflineOnly;
-(NSURL *)originalAudioFileURL;
-(NSURL *)modelOverrideURL;
-(char)narrowband;
-(char)shouldStoreAudioOnDevice;
-(NSArray *)loggingContext;
-(NSArray *)jitGrammar;
-(id)initWithLanguage:(id)arg1 interactionIdentifier:(id)arg2 task:(id)arg3 loggingContext:(id)arg4 applicationName:(id)arg5 profile:(id)arg6 overrides:(id)arg7 modelOverrideURL:(id)arg8 originalAudioFileURL:(id)arg9 narrowband:(char)arg10 detectUtterances:(char)arg11 censorSpeech:(char)arg12 farField:(char)arg13 secureOfflineOnly:(char)arg14 shouldStoreAudioOnDevice:(char)arg15 maximumRecognitionDuration:(double)arg16 inputOrigin:(id)arg17 location:(id)arg18 jitGrammar:(id)arg19 ;
@end

