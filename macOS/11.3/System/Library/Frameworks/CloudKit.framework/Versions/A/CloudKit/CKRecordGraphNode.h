/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CloudKit.framework/Versions/A/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableSet, CKRecord;

@interface CKRecordGraphNode : NSObject {

	NSMutableSet* _edges;
	NSMutableSet* _indegrees;
	CKRecord* _record;

}

@property (nonatomic,retain) NSMutableSet * edges;                       //@synthesize edges=_edges - In the implementation block
@property (nonatomic,readonly) NSMutableSet * indegrees;                 //@synthesize indegrees=_indegrees - In the implementation block
@property (nonatomic,readonly) unsigned long long indegree; 
@property (nonatomic,retain) CKRecord * record;                          //@synthesize record=_record - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(NSMutableSet *)edges;
-(void)setEdges:(NSMutableSet *)arg1 ;
-(id)CKPropertiesDescription;
-(CKRecord *)record;
-(void)setRecord:(CKRecord *)arg1 ;
-(NSMutableSet *)indegrees;
-(unsigned long long)indegree;
@end

