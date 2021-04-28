/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/Versions/A/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CKRecordID, CKRecord;

@interface BRCShareDeleteInfo : NSObject {

	CKRecordID* _shareID;
	CKRecord* _emptyRecord;

}

@property (nonatomic,readonly) CKRecordID * shareID;                //@synthesize shareID=_shareID - In the implementation block
@property (nonatomic,readonly) CKRecord * emptyRecord;              //@synthesize emptyRecord=_emptyRecord - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(CKRecordID *)shareID;
-(CKRecord *)emptyRecord;
-(id)initWithShareID:(id)arg1 emptyRecord:(id)arg2 ;
@end
