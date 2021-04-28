/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/Versions/A/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray, NSMutableDictionary;

@interface AFPluginManager : NSObject {

	NSString* _path;
	NSArray* _domainKeys;
	/*^block*/id _factoryInitializationBlock;
	NSMutableDictionary* _domainKeyDictionary;
	char _hasLoadedBundles;

}
+(id)pluginManagerForPath:(id)arg1 domainKeys:(id)arg2 factoryInitializationBlock:(/*^block*/id)arg3 ;
-(id)description;
-(id)initWithPath:(id)arg1 domainKeys:(id)arg2 factoryInitializationBlock:(/*^block*/id)arg3 ;
-(void)_loadBundlesIfNeeded;
-(void)_registerBundle:(id)arg1 ;
-(void)enumerateFactoryInstancesForDomainKey:(id)arg1 groupIdentifier:(id)arg2 classIdentifier:(id)arg3 usingBlock:(/*^block*/id)arg4 ;
-(void)preloadBundles;
@end
