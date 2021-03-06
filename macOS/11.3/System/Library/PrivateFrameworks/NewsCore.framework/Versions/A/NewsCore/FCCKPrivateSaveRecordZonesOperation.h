/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/Versions/A/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCCKPrivateDatabaseOperation.h>

@class NSArray;

@interface FCCKPrivateSaveRecordZonesOperation : FCCKPrivateDatabaseOperation {

	char _canBypassEncryptionRequirement;
	NSArray* _recordZonesToSave;
	/*^block*/id _saveRecordZonesCompletionBlock;
	NSArray* _resultSavedRecordZones;

}

@property (nonatomic,retain) NSArray * resultSavedRecordZones;                 //@synthesize resultSavedRecordZones=_resultSavedRecordZones - In the implementation block
@property (nonatomic,copy) NSArray * recordZonesToSave;                        //@synthesize recordZonesToSave=_recordZonesToSave - In the implementation block
@property (assign,nonatomic) char canBypassEncryptionRequirement;              //@synthesize canBypassEncryptionRequirement=_canBypassEncryptionRequirement - In the implementation block
@property (nonatomic,copy) id saveRecordZonesCompletionBlock;                  //@synthesize saveRecordZonesCompletionBlock=_saveRecordZonesCompletionBlock - In the implementation block
-(NSArray *)recordZonesToSave;
-(void)setRecordZonesToSave:(NSArray *)arg1 ;
-(void)performOperation;
-(char)validateOperation;
-(void)operationWillFinishWithError:(id)arg1 ;
-(void)setSaveRecordZonesCompletionBlock:(id)arg1 ;
-(char)canBypassEncryptionRequirement;
-(void)setCanBypassEncryptionRequirement:(char)arg1 ;
-(void)setResultSavedRecordZones:(NSArray *)arg1 ;
-(id)saveRecordZonesCompletionBlock;
-(NSArray *)resultSavedRecordZones;
@end

