/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:11 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MapsSync.framework/Versions/A/MapsSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsSync/MapsSync.MapsSyncBaseItem.h>

@class NSSet, NSString, NSData;

@interface MapsSync.MapsSyncCollection : MapsSync.MapsSyncBaseItem {

	 _collectionDescription;
	 _image;
	 _imageUrl;
	 _title;
	 _places;
	 _placesUnstored;
	 _placesLoaded;

}

@property (copy,nonatomic) NSSet * _placesUnstored; 
@property (assign,nonatomic) char _placesLoaded;                              //@synthesize placesLoaded=_placesLoaded - In the implementation block
@property (readonly,nonatomic) NSString * description; 
@property (readonly,nonatomic) NSString * collectionDescription; 
@property (readonly,nonatomic) NSData * image; 
@property (readonly,nonatomic) NSString * imageUrl; 
@property (readonly,nonatomic) NSString * title; 
@property (readonly,nonatomic) NSSet * places; 
+(void)fetchUniquelyOwnedCollectionItemsWithCollection:(id)arg1 context:(id)arg2 completion:(/*^block*/id)arg3 ;
+(void)deleteUniquelyOwnedCollectionItemsWithCollection:(id)arg1 context:(id)arg2 completion:(/*^block*/id)arg3 ;
+(id)fetchCollectionForIdentifier:(id)arg1 ;
-(id)copyWithZone:(void*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(NSString *)description;
-(id)initWithObject:(id)arg1 ;
-(NSString *)title;
-(NSData *)image;
-(NSSet *)places;
-(NSString *)collectionDescription;
-(NSString *)imageUrl;
-(Class)managedObjectClass;
-(void)setPropertiesWithObject:(id)arg1 ;
-(Class)mutableObjectClass;
-(void)addEditWithBlock:(/*^block*/id)arg1 ;
-(void)deleteWithCompletion:(/*^block*/id)arg1 ;
-(void)executeOnFirstSave:(id)arg1 ;
-(NSSet *)_placesUnstored;
-(void)set_placesUnstored:(NSSet *)arg1 ;
-(char)_placesLoaded;
-(void)set_placesLoaded:(char)arg1 ;
-(char)attributesEqual:(id)arg1 ;
@end

