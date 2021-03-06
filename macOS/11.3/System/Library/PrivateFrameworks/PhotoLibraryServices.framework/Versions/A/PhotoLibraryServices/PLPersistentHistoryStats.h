/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/Versions/A/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate;

@interface PLPersistentHistoryStats : NSObject {

	long long _filePageCount;
	long long _unusedPageCount;
	long long _transactionsPageCount;
	long long _transactionStringsPageCount;
	long long _changesPageCount;
	long long _transactionCount;
	NSDate* _earliestTransactionDate;

}

@property (assign,nonatomic) long long filePageCount;                                           //@synthesize filePageCount=_filePageCount - In the implementation block
@property (assign,nonatomic) long long unusedPageCount;                                         //@synthesize unusedPageCount=_unusedPageCount - In the implementation block
@property (nonatomic,readonly) long long payloadPageCount; 
@property (assign,nonatomic) long long transactionsPageCount;                                   //@synthesize transactionsPageCount=_transactionsPageCount - In the implementation block
@property (assign,nonatomic) long long transactionStringsPageCount;                             //@synthesize transactionStringsPageCount=_transactionStringsPageCount - In the implementation block
@property (assign,nonatomic) long long changesPageCount;                                        //@synthesize changesPageCount=_changesPageCount - In the implementation block
@property (nonatomic,readonly) long long persistentHistoryPageCount; 
@property (assign,nonatomic) long long transactionCount;                                        //@synthesize transactionCount=_transactionCount - In the implementation block
@property (nonatomic,copy) NSDate * earliestTransactionDate;                                    //@synthesize earliestTransactionDate=_earliestTransactionDate - In the implementation block
@property (nonatomic,readonly) long long daysSinceEarliestTransaction; 
@property (nonatomic,readonly) double transactionsPageCountPercent; 
@property (nonatomic,readonly) double transactionStringsPageCountPercent; 
@property (nonatomic,readonly) double changesPageCountPercent; 
@property (nonatomic,readonly) double persistentHistoryPageCountPercent; 
@property (nonatomic,readonly) double transactionsPageCountPercentOfPayload; 
@property (nonatomic,readonly) double transactionStringsPageCountPercentOfPayload; 
@property (nonatomic,readonly) double changesPageCountPercentOfPayload; 
@property (nonatomic,readonly) double persistentHistoryPageCountPercentOfPayload; 
+(id)statsFromDatabase:(id)arg1 ;
+(char)fetchPageCountsOfPersistentHistoryTablesFromDatabase:(id)arg1 intoStats:(id)arg2 ;
+(char)fetchTotalPageCountFromDatabase:(id)arg1 intoStats:(id)arg2 ;
+(char)fetchUnusedPageCountFromDatabase:(id)arg1 intoStats:(id)arg2 ;
+(char)fetchTransactionCountFromDatabase:(id)arg1 intoStats:(id)arg2 ;
+(char)fetchEarliestTransactionDateFromDatabase:(id)arg1 intoStats:(id)arg2 ;
-(long long)transactionCount;
-(void)setTransactionCount:(long long)arg1 ;
-(long long)filePageCount;
-(long long)unusedPageCount;
-(long long)payloadPageCount;
-(long long)transactionsPageCount;
-(long long)transactionStringsPageCount;
-(long long)changesPageCount;
-(long long)persistentHistoryPageCount;
-(NSDate *)earliestTransactionDate;
-(long long)daysSinceEarliestTransaction;
-(double)transactionsPageCountPercent;
-(double)transactionStringsPageCountPercent;
-(double)changesPageCountPercent;
-(double)persistentHistoryPageCountPercent;
-(double)transactionsPageCountPercentOfPayload;
-(double)transactionStringsPageCountPercentOfPayload;
-(double)changesPageCountPercentOfPayload;
-(double)persistentHistoryPageCountPercentOfPayload;
-(double)_pageCountAsPercentOfFile:(long long)arg1 ;
-(double)_pageCountAsPercentOfPayload:(long long)arg1 ;
-(void)setFilePageCount:(long long)arg1 ;
-(void)setUnusedPageCount:(long long)arg1 ;
-(void)setTransactionsPageCount:(long long)arg1 ;
-(void)setTransactionStringsPageCount:(long long)arg1 ;
-(void)setChangesPageCount:(long long)arg1 ;
-(void)setEarliestTransactionDate:(NSDate *)arg1 ;
@end

