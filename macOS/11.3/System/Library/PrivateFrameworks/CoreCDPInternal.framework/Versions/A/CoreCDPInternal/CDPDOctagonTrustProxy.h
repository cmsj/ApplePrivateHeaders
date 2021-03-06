/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:06 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/Versions/A/CoreCDPInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class CDPContext;


@protocol CDPDOctagonTrustProxy <NSObject>
@property (nonatomic,retain) CDPContext * cdpContext; 
@required
-(id)initWithContext:(id)arg1;
-(CDPContext *)cdpContext;
-(void)setCdpContext:(id)arg1;
-(id)fetchEscrowRecords:(id)arg1 forceFetch:(char)arg2 error:(id*)arg3;
-(id)fetchAllEscrowRecords:(id)arg1 forceFetch:(char)arg2 error:(id*)arg3;

@end

