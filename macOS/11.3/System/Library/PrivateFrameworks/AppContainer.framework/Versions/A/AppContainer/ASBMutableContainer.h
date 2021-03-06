/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:11 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AppContainer.framework/Versions/A/AppContainer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppContainer/AppContainer-Structs.h>
#import <AppContainer/ASBContainer.h>

@class CodeIdentity, NSDictionary, NSRegularExpression, NSString, NSURL;

@interface ASBMutableContainer : ASBContainer {

	CodeIdentity* _owner;
	char _created;
	NSDictionary* varMap;
	NSRegularExpression* matchVars;
	char _pathSpecOnce;
	NSString* _backupPath;

}

@property (readonly) NSURL * backupURL; 
@property (readonly) CodeIdentity * ownerCode;              //@synthesize owner=_owner - In the implementation block
+(id)containerForApplicationAtURL:(id)arg1 error:(id*)arg2 ;
+(id)containerForApplicationAtURL:(id)arg1 withHomeDirectory:(id)arg2 error:(id*)arg3 ;
+(id)containerForCodeIdentity:(id)arg1 withHomeDirectory:(id)arg2 options:(unsigned long long)arg3 error:(id*)arg4 ;
+(id)containerForApplicationAtURL:(id)arg1 withHomeDirectory:(id)arg2 options:(unsigned long long)arg3 error:(id*)arg4 ;
+(id)containerForCodeIdentity:(id)arg1 withHomeDirectory:(id)arg2 error:(id*)arg3 ;
+(id)containerForCodeIdentity:(id)arg1 mcmContainer:(container_object_sRef)arg2 HomeDirectory:(id)arg3 error:(id*)arg4 ;
-(id)initWithCodeIdentity:(id)arg1 andHomeDirectory:(id)arg2 error:(id*)arg3 ;
-(id)initWithHomeDirectory:(id)arg1 andContainerPath:(id)arg2 error:(id*)arg3 ;
-(id)evaluatePathSpecification:(id)arg1 usingFileManager:(id)arg2 error:(id*)arg3 ;
-(char)backupFile:(id)arg1 usingFileManager:(id)arg2 error:(id*)arg3 ;
-(id)initWithApplicationAtURL:(id)arg1 andHomeDirectory:(id)arg2 options:(unsigned long long)arg3 error:(id*)arg4 ;
-(id)initWithCodeIdentity:(id)arg1 andHomeDirectory:(id)arg2 options:(unsigned long long)arg3 error:(id*)arg4 ;
-(id)initWithFakeContainerForCodeIdentity:(id)arg1 andHomeDirectory:(id)arg2 error:(id*)arg3 ;
-(id)initWithCodeIdentity:(id)arg1 mcmContainer:(container_object_sRef)arg2 HomeDirectory:(id)arg3 error:(id*)arg4 ;
-(char)preferenceDomain:(id)arg1 requiresMigration:(char*)arg2 error:(id*)arg3 ;
-(CodeIdentity *)ownerCode;
-(id)initWithHomeDirectory:(id)arg1 andContainerPath:(id)arg2 codeIdentity:(id)arg3 error:(id*)arg4 ;
-(void)setRequirementACL:(id)arg1 ;
-(NSURL *)backupURL;
-(char)migrateAndIgnoreActionFailures:(char)arg1 error:(id*)arg2 ;
-(void)setSandboxProfileData:(id)arg1 ;
-(void)setSandboxProfileDataValidationInfo:(id)arg1 ;
@end

