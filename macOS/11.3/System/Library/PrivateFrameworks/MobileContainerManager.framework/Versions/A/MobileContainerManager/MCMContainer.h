/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:49 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MobileContainerManager.framework/Versions/A/MobileContainerManager
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MobileContainerManager/MobileContainerManager-Structs.h>
@class NSString, NSUUID, NSURL, NSDictionary;

@interface MCMContainer : NSObject {

	NSString* _identifier;
	NSUUID* _uuid;
	NSString* _personaUniqueString;
	long long _containerClass;
	container_object_sRef _thisContainer;

}

@property (nonatomic,readonly) NSUUID * uuid; 
@property (nonatomic,readonly) container_object_sRef thisContainer; 
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) NSURL * url; 
@property (nonatomic,readonly) NSDictionary * info; 
@property (nonatomic,readonly) long long containerClass; 
@property (nonatomic,readonly) NSString * personaUniqueString; 
@property (getter=isTemporary,nonatomic,readonly) char temporary; 
+(long long)typeContainerClass;
+(id)temporaryContainerWithIdentifier:(id)arg1 existed:(char*)arg2 error:(id*)arg3 ;
+(id)containerWithIdentifier:(id)arg1 createIfNecessary:(char)arg2 existed:(char*)arg3 error:(id*)arg4 ;
+(id)containerWithIdentifier:(id)arg1 error:(id*)arg2 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(NSUUID *)uuid;
-(NSString *)identifier;
-(NSURL *)url;
-(NSDictionary *)info;
-(long long)containerClass;
-(char)isTemporary;
-(NSString *)personaUniqueString;
-(void)_errorOccurred;
-(char)isEqualToContainer:(id)arg1 ;
-(void)markDeleted;
-(container_object_sRef)thisContainer;
-(container_object_sRef)getLowLevelContainerObject;
-(id)initWithIdentifier:(id)arg1 path:(id)arg2 uniquePathComponent:(id)arg3 uuid:(id)arg4 personaUniqueString:(id)arg5 error:(id*)arg6 ;
-(id)initWithIdentifier:(id)arg1 createIfNecessary:(char)arg2 existed:(char*)arg3 temp:(char)arg4 error:(id*)arg5 ;
-(id)destroyContainerWithCompletion:(/*^block*/id)arg1 ;
-(char)setInfoValue:(id)arg1 forKey:(id)arg2 error:(id*)arg3 ;
-(id)infoValueForKey:(id)arg1 error:(id*)arg2 ;
-(char)recreateDefaultStructureWithError:(id*)arg1 ;
-(char)regenerateDirectoryUUIDWithError:(id*)arg1 ;
-(unsigned long long)diskUsageWithError:(id*)arg1 ;
-(char)_obj1:(id)arg1 isEqualToObj2:(id)arg2 ;
@end

