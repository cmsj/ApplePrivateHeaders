/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:54 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/UAUPlugin.framework/Versions/A/UAUPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UpdaterSessionParameters, NSMutableArray, NSMutableSet, NSMutableDictionary;

@interface UAUSession : NSObject {

	UpdaterSessionParameters* _sessionParams;
	NSMutableArray* _asyncSafePlugins;
	NSMutableArray* _plugins;
	NSMutableSet* _optedOutPluginIDs;
	NSMutableDictionary* _pluginToBundleIDMap;

}

@property (retain) UpdaterSessionParameters * sessionParams;               //@synthesize sessionParams=_sessionParams - In the implementation block
@property (retain) NSMutableArray * asyncSafePlugins;                      //@synthesize asyncSafePlugins=_asyncSafePlugins - In the implementation block
@property (retain) NSMutableArray * plugins;                               //@synthesize plugins=_plugins - In the implementation block
@property (retain) NSMutableSet * optedOutPluginIDs;                       //@synthesize optedOutPluginIDs=_optedOutPluginIDs - In the implementation block
@property (retain) NSMutableDictionary * pluginToBundleIDMap;              //@synthesize pluginToBundleIDMap=_pluginToBundleIDMap - In the implementation block
-(id)initWithParameters:(id)arg1 ;
-(NSMutableArray *)plugins;
-(void)setPlugins:(NSMutableArray *)arg1 ;
-(void)setSessionParams:(UpdaterSessionParameters *)arg1 ;
-(void)setAsyncSafePlugins:(NSMutableArray *)arg1 ;
-(void)setPluginToBundleIDMap:(NSMutableDictionary *)arg1 ;
-(UpdaterSessionParameters *)sessionParams;
-(NSMutableArray *)asyncSafePlugins;
-(NSMutableDictionary *)pluginToBundleIDMap;
-(NSMutableSet *)optedOutPluginIDs;
-(void)setOptedOutPluginIDs:(NSMutableSet *)arg1 ;
-(void)loadOnePlugin:(id)arg1 fromBundle:(id)arg2 withOverrideID:(id)arg3 ;
-(void)runOnePlugin:(id)arg1 withPrivilege:(char)arg2 withCompletedSet:(id)arg3 andQueue:(id)arg4 ;
-(void)loadPlugins;
-(void)processPluginsWithPrivilege:(char)arg1 ;
@end
