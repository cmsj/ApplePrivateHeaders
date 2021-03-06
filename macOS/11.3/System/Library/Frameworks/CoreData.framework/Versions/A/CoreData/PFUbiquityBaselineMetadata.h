/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreData.framework/Versions/A/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, PFUbiquityLocation, PFUbiquityKnowledgeVector, NSMutableDictionary, NSDictionary;

@interface PFUbiquityBaselineMetadata : NSObject <NSCoding, NSSecureCoding> {

	NSString* _storeName;
	NSString* _authorPeerID;
	NSString* _modelVersionHash;
	PFUbiquityLocation* _rootLocation;
	PFUbiquityKnowledgeVector* _pKV;
	PFUbiquityKnowledgeVector* _kv;
	NSMutableDictionary* _peerRanges;

}

@property (readonly) NSString * storeName;                                                       //@synthesize storeName=_storeName - In the implementation block
@property (readonly) NSString * authorPeerID;                                                    //@synthesize authorPeerID=_authorPeerID - In the implementation block
@property (readonly) NSString * modelVersionHash;                                                //@synthesize modelVersionHash=_modelVersionHash - In the implementation block
@property (readonly) PFUbiquityLocation * rootLocation;                                          //@synthesize rootLocation=_rootLocation - In the implementation block
@property (nonatomic,readonly) PFUbiquityKnowledgeVector * previousKnowledgeVector;              //@synthesize pKV=_pKV - In the implementation block
@property (readonly) PFUbiquityKnowledgeVector * knowledgeVector;                                //@synthesize kv=_kv - In the implementation block
@property (readonly) NSDictionary * peerRanges;                                                  //@synthesize peerRanges=_peerRanges - In the implementation block
+(char)supportsSecureCoding;
-(id)initWithLocalPeerID:(id)arg1 storeName:(id)arg2 modelVersionHash:(id)arg3 andUbiquityRootLocation:(id)arg4 ;
-(NSString *)modelVersionHash;
-(PFUbiquityKnowledgeVector *)knowledgeVector;
-(void)setKnowledgeVector:(PFUbiquityKnowledgeVector *)arg1 ;
-(NSDictionary *)peerRanges;
-(char)gatherMetadataWithStore:(id)arg1 andError:(id*)arg2 ;
-(NSString *)authorPeerID;
-(PFUbiquityKnowledgeVector *)previousKnowledgeVector;
-(id)createNewLocalRangeWithRangeStart:(unsigned long long)arg1 andRangeEnd:(unsigned long long)arg2 forEntityNamed:(id)arg3 ;
-(void)addDictionaryForPeerRange:(id)arg1 ;
-(id)createPeerRangeDictionary:(id)arg1 ;
-(void)setPreviousKnowledgeVectorFromCurrentMetadata:(id)arg1 ;
-(void)_migrateToModelVersionHash:(id)arg1 ;
-(PFUbiquityLocation *)rootLocation;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)storeName;
@end

