/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreData.framework/Versions/A/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreData/PFHistoryAnalyzerOptions.h>

@class CKRecordZone, CKSchedulerActivity;

@interface PFCloudKitHistoryAnalyzerOptions : PFHistoryAnalyzerOptions {

	char _includePrivateTransactions;
	CKRecordZone* _recordZone;
	CKSchedulerActivity* _activity;

}

@property (nonatomic,retain) CKRecordZone * recordZone;                    //@synthesize recordZone=_recordZone - In the implementation block
@property (assign,nonatomic) char includePrivateTransactions;              //@synthesize includePrivateTransactions=_includePrivateTransactions - In the implementation block
@property (nonatomic,retain) CKSchedulerActivity * activity;               //@synthesize activity=_activity - In the implementation block
-(char)includePrivateTransactions;
-(id)initWithRecordZone:(id)arg1 ;
-(void)setIncludePrivateTransactions:(char)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(CKSchedulerActivity *)activity;
-(void)setActivity:(CKSchedulerActivity *)arg1 ;
-(CKRecordZone *)recordZone;
-(void)setRecordZone:(CKRecordZone *)arg1 ;
@end
