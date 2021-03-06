/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:54 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreServices.framework/Versions/A/Frameworks/LaunchServices.framework/Versions/A/LaunchServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <LaunchServices/LaunchServices-Structs.h>
#import <libobjc.A.dylib/UMUserPersonaUpdateObserver.h>

@class NSDictionary, NSString;

@interface _LSPersonaDatabase : NSObject <UMUserPersonaUpdateObserver> {

	os_unfair_lock_s _ivarLock;
	os_unfair_lock_s _uncachedCalloutLock;
	char _registered;
	NSDictionary* _cachedBundleIDToPersonasMap;
	NSString* _cachedSystemPersonaIdentifier;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)registerWithUserManagerForAttempt:(unsigned long long)arg1 maxAttempts:(unsigned long long)arg2 ;
-(void)registerWithUserManager;
-(id)initPrivately;
-(void)getUncachedBundleIDToPersonasMap:(id*)arg1 systemPersonaIdentifier:(id*)arg2 ;
-(void)getCachedBundleIDToPersonasMap:(id*)arg1 systemPersonaIdentifier:(id*)arg2 ;
-(id)getBundleIDToPersonasMap;
-(id)getSystemPersonaIdentifier;
-(void)personaListDidUpdate;
-(id)personaIdentifiersForBundleIdentifier:(id)arg1 ;
-(char)personaListContainsSystemPersona:(id)arg1 ;
@end

