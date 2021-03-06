/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/Versions/A/ScreenTimeCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol STPersistenceControllerProtocol;
@class NSPersistentHistoryToken;

@interface STUnique : NSObject {

	NSPersistentHistoryToken* _migratedToken;
	id<STPersistenceControllerProtocol> _persistenceController;

}

@property (nonatomic,retain) id<STPersistenceControllerProtocol> persistenceController;              //@synthesize persistenceController=_persistenceController - In the implementation block
+(id)localToCloudMapping;
+(Class)_internalClassForSerializableClassName:(id)arg1 ;
+(id)cloudToLocalMapping;
+(id)mirroredEntityNames;
-(char)migrateWithError:(id*)arg1 ;
-(id<STPersistenceControllerProtocol>)persistenceController;
-(id)historyTokenForAuthor:(id)arg1 fromStore:(id)arg2 ;
-(char)addHistoryToken:(id)arg1 forAuthor:(id)arg2 toMetadataForStore:(id)arg3 error:(id*)arg4 ;
-(void)newResolveConflictsBetweenLocalDeltas:(id)arg1 cloudDeltas:(id)arg2 ;
-(id)initWithPersistenceController:(id)arg1 ;
-(char)areLocalChangesInterestingWithError:(id*)arg1 ;
-(void)resolveConflictsBetweenLocalDeltas:(id)arg1 cloudDeltas:(id)arg2 ;
-(void)setPersistenceController:(id<STPersistenceControllerProtocol>)arg1 ;
@end

