/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FunctionBarFavoritesVending.h>

@protocol FunctionBarFavoritesClient;
@class WebBookmarkList, CombinedFavoritesController, NSString;

@interface FunctionBarFavoritesVendor : NSObject <FunctionBarFavoritesVending> {

	CombinedFavoritesController* _combinedFavoritesController;
	id<FunctionBarFavoritesClient> _client;
	WebBookmarkList* _vendedFolder;

}

@property (assign,nonatomic,__weak) id<FunctionBarFavoritesClient> client;              //@synthesize client=_client - In the implementation block
@property (nonatomic,retain) WebBookmarkList * vendedFolder;                            //@synthesize vendedFolder=_vendedFolder - In the implementation block
@property (nonatomic,readonly) char canNavigateUp; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<FunctionBarFavoritesClient>)client;
-(void)setClient:(id<FunctionBarFavoritesClient>)arg1 ;
-(void)_favoritesDidChange:(id)arg1 ;
-(id)initWithCombinedFavoritesController:(id)arg1 ;
-(WebBookmarkList *)vendedFolder;
-(void)setVendedFolder:(WebBookmarkList *)arg1 ;
-(char)canNavigateUp;
-(void)getFunctionBarFavoritesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_notifyClientOfRefresh;
-(id)_defaultVendedFolder;
@end

