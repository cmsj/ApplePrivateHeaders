/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/Versions/A/ReminderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ReminderKit/ReminderKit-Structs.h>
#import <ReminderKit/TTVersionedDocument.h>
#import <libobjc.A.dylib/REMReplicaClockProviding.h>

@class TTMergeableAttributedString, NSString;

@interface TTMergeableStringVersionedDocument : TTVersionedDocument <REMReplicaClockProviding> {

	TTMergeableAttributedString* _mergeableString;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) TTMergeableAttributedString * mergeableString;              //@synthesize mergeableString=_mergeableString - In the implementation block
+(unsigned)serializationVersion;
+(unsigned)minimumSupportedVersion;
-(id)clockElementListForReplicaUUID:(id)arg1 ;
-(TTMergeableAttributedString *)mergeableString;
-(id)initWithMergeableString:(id)arg1 ;
-(id)initWithData:(id)arg1 andReplicaID:(id)arg2 ;
-(char)rem_isEqual:(id)arg1 ;
-(id)rem_copyWithReplicaIDForNewEdits:(id)arg1 ;
-(unsigned long long)mergeWithStringVersionedDocument:(id)arg1 ;
-(id)initWithArchive:(const Document*)arg1 andReplicaID:(id)arg2 ;
-(void)mergeVersion:(unsigned)arg1 fromData:(id)arg2 ;
-(id)serializeCurrentVersion:(unsigned*)arg1 ;
-(void)setMergeableString:(TTMergeableAttributedString *)arg1 ;
@end

