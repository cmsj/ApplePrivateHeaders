/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CloudKit.framework/Versions/A/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CloudKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSPredicate, NSArray;

@interface CKQuery : NSObject <NSSecureCoding, NSCopying> {

	NSString* _recordType;
	NSPredicate* _predicate;
	NSArray* _sortDescriptors;

}

@property (nonatomic,copy,readonly) NSString * recordType;                //@synthesize recordType=_recordType - In the implementation block
@property (nonatomic,copy,readonly) NSPredicate * predicate;              //@synthesize predicate=_predicate - In the implementation block
@property (nonatomic,copy) NSArray * sortDescriptors;                     //@synthesize sortDescriptors=_sortDescriptors - In the implementation block
+(char)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)debugDescription;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSPredicate *)predicate;
-(void)setPredicate:(NSPredicate *)arg1 ;
-(NSArray *)sortDescriptors;
-(void)setSortDescriptors:(NSArray *)arg1 ;
-(NSString *)recordType;
-(id)initWithRecordType:(id)arg1 predicate:(id)arg2 ;
-(id)CKPropertiesDescription;
-(void)setRecordType:(NSString *)arg1 ;
@end

