/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:47 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/Versions/A/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSFilePresenter.h>

@class NSURL, NSOperationQueue, NSSet, NSString, NSFileVersion, NSDate;

@interface GKSavedGameDocument : NSObject <NSFilePresenter> {

	char _hasConflict;
	char _isConflictVersion;
	NSURL* _fileURL;
	NSString* _name;
	NSFileVersion* _fileVersion;
	NSString* _deviceName;
	NSDate* _modificationDate;

}

@property (nonatomic,retain) NSString * deviceName;                                      //@synthesize deviceName=_deviceName - In the implementation block
@property (nonatomic,retain) NSDate * modificationDate;                                  //@synthesize modificationDate=_modificationDate - In the implementation block
@property (nonatomic,retain) NSURL * fileURL;                                            //@synthesize fileURL=_fileURL - In the implementation block
@property (nonatomic,retain) NSString * name;                                            //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSFileVersion * fileVersion;                                //@synthesize fileVersion=_fileVersion - In the implementation block
@property (assign,nonatomic) char hasConflict;                                           //@synthesize hasConflict=_hasConflict - In the implementation block
@property (assign,nonatomic) char isConflictVersion;                                     //@synthesize isConflictVersion=_isConflictVersion - In the implementation block
@property (copy,readonly) NSURL * presentedItemURL; 
@property (retain,readonly) NSOperationQueue * presentedItemOperationQueue; 
@property (copy,readonly) NSURL * primaryPresentedItemURL; 
@property (readonly) NSSet * observedPresentedItemUbiquityAttributes; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)currentDeviceName;
-(void)dealloc;
-(NSString *)description;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(NSURL *)fileURL;
-(NSURL *)presentedItemURL;
-(NSOperationQueue *)presentedItemOperationQueue;
-(void)presentedItemDidChange;
-(void)presentedItemDidGainVersion:(id)arg1 ;
-(void)presentedItemDidLoseVersion:(id)arg1 ;
-(void)presentedItemDidResolveConflictVersion:(id)arg1 ;
-(NSDate *)modificationDate;
-(void)setFileURL:(NSURL *)arg1 ;
-(id)initWithFileURL:(id)arg1 ;
-(NSString *)deviceName;
-(id)metadata;
-(void)setMetadata:(id)arg1 ;
-(void)setModificationDate:(NSDate *)arg1 ;
-(void)setDeviceName:(NSString *)arg1 ;
-(NSFileVersion *)fileVersion;
-(void)setFileVersion:(NSFileVersion *)arg1 ;
-(void)loadDataWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)updateMetadata;
-(char)isConflictVersion;
-(void)saveData:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)deleteAllVersionsIncludingCurrent:(char)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)loadMetadataWithCompletionHandler:(/*^block*/id)arg1 ;
-(char)hasConflict;
-(void)setIsConflictVersion:(char)arg1 ;
-(void)setHasConflict:(char)arg1 ;
-(void)updateConflictStateWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)deleteConflictVersion:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)loadWrapperDataWithFilename:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

