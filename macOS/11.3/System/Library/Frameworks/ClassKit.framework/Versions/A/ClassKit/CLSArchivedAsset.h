/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:34 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/ClassKit.framework/Versions/A/ClassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ClassKit/CLSObject.h>
#import <libobjc.A.dylib/CLSRelationable.h>

@class NSURL, NSString;

@interface CLSArchivedAsset : CLSObject <CLSRelationable> {

	NSURL* _url;
	char _uploaded;
	char _addedToFilePresenter;
	char _shared;
	long long _totalUnitCount;
	long long _completedUnitCount;
	NSString* _ownerPersonID;
	NSString* _brItemID;
	NSString* _brOwnerName;
	NSString* _brZoneName;
	NSString* _brShareName;
	NSString* _ubiquitousContainerName;
	NSString* _relativePathWithinContainer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSURL * url;                                         //@synthesize url=_url - In the implementation block
@property (nonatomic,retain) NSString * ownerPersonID;                            //@synthesize ownerPersonID=_ownerPersonID - In the implementation block
@property (nonatomic,retain) NSString * brItemID;                                 //@synthesize brItemID=_brItemID - In the implementation block
@property (nonatomic,retain) NSString * brOwnerName;                              //@synthesize brOwnerName=_brOwnerName - In the implementation block
@property (nonatomic,retain) NSString * brZoneName;                               //@synthesize brZoneName=_brZoneName - In the implementation block
@property (nonatomic,retain) NSString * brShareName;                              //@synthesize brShareName=_brShareName - In the implementation block
@property (nonatomic,retain) NSString * ubiquitousContainerName;                  //@synthesize ubiquitousContainerName=_ubiquitousContainerName - In the implementation block
@property (nonatomic,retain) NSString * relativePathWithinContainer;              //@synthesize relativePathWithinContainer=_relativePathWithinContainer - In the implementation block
+(char)supportsSecureCoding;
+(id)relations;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_init;
-(NSURL *)url;
-(void)setUrl:(NSURL *)arg1 ;
-(NSString *)ownerPersonID;
-(void)setOwnerPersonID:(NSString *)arg1 ;
-(NSString *)brItemID;
-(NSString *)brZoneName;
-(NSString *)brOwnerName;
-(void)urlSuitableForOpeningWithCompletion:(/*^block*/id)arg1 ;
-(void)setBrItemID:(NSString *)arg1 ;
-(void)setBrOwnerName:(NSString *)arg1 ;
-(void)setBrZoneName:(NSString *)arg1 ;
-(NSString *)brShareName;
-(void)setBrShareName:(NSString *)arg1 ;
-(NSString *)ubiquitousContainerName;
-(void)setUbiquitousContainerName:(NSString *)arg1 ;
-(NSString *)relativePathWithinContainer;
-(void)setRelativePathWithinContainer:(NSString *)arg1 ;
@end

