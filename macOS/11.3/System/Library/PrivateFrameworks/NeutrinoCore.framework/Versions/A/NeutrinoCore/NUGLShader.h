/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:17 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/Versions/A/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoCore/NUGLObject.h>

@class NSError, NSString;

@interface NUGLShader : NUGLObject {

	long long _compilationStatus;
	NSError* _compilationError;
	long long _type;
	NSString* _source;

}

@property (readonly) unsigned glType; 
@property (readonly) unsigned glStage; 
@property (readonly) long long type;                 //@synthesize type=_type - In the implementation block
@property (readonly) NSString * source;              //@synthesize source=_source - In the implementation block
-(id)init;
-(long long)type;
-(NSString *)source;
-(void)delete;
-(void)generate:(id)arg1 ;
-(id)initWithType:(long long)arg1 source:(id)arg2 ;
-(unsigned)glType;
-(unsigned)glStage;
-(char)compile:(id)arg1 error:(out id*)arg2 ;
-(void)_compile:(id)arg1 ;
@end

