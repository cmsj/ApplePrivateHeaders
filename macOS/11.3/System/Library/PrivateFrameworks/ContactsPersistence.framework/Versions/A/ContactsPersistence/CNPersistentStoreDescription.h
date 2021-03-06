/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ContactsPersistence.framework/Versions/A/ContactsPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, CNFuture, NSManagedObjectModel;

@interface CNPersistentStoreDescription : NSObject {

	NSString* _modelName;
	unsigned long long _dataType;
	float _version;
	CNFuture* _modelFuture;

}

@property (copy,readonly) NSString * modelName;                 //@synthesize modelName=_modelName - In the implementation block
@property (readonly) NSManagedObjectModel * model; 
@property (readonly) unsigned long long dataType;               //@synthesize dataType=_dataType - In the implementation block
@property (readonly) float version;                             //@synthesize version=_version - In the implementation block
+(id)addressBookStoreDescription;
+(id)modelFutureWithName:(id)arg1 ;
+(id)modelUrlForName:(id)arg1 ;
+(id)bundleForName:(id)arg1 ;
-(float)version;
-(unsigned long long)dataType;
-(NSManagedObjectModel *)model;
-(NSString *)modelName;
-(id)initWithModelName:(id)arg1 dataType:(unsigned long long)arg2 version:(float)arg3 ;
@end

