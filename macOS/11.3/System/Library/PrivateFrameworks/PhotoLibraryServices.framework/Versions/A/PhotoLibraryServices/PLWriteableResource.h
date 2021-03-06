/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/Versions/A/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PLWriteableResource <PLResource>
@property (assign,nonatomic) unsigned resourceType; 
@property (assign,nonatomic) unsigned version; 
@property (assign,nonatomic) unsigned recipeID; 
@property (assign,nonatomic) unsigned orientation; 
@property (nonatomic,retain) id<PLResourceDataStore> dataStore; 
@property (assign,nonatomic) long long dataStoreSubtype; 
@property (nonatomic,retain) id<PLResourceDataStoreKey> dataStoreKey; 
@property (assign,nonatomic) short remoteAvailability; 
@property (assign,nonatomic) float scale; 
@property (assign,nonatomic) long long unorientedWidth; 
@property (assign,nonatomic) long long unorientedHeight; 
@property (assign,nonatomic) int qualitySortValue; 
@property (nonatomic,retain) id<PLCodecIdentity> codecID; 
@property (nonatomic,retain) id<PLUniformTypeIdentifierIdentity> uniformTypeIdentifierID; 
@required
-(unsigned)version;
-(void)setOrientation:(unsigned)arg1;
-(float)scale;
-(void)setVersion:(unsigned)arg1;
-(unsigned)orientation;
-(void)setScale:(float)arg1;
-(unsigned)resourceType;
-(void)setResourceType:(unsigned)arg1;
-(id<PLResourceDataStore>)dataStore;
-(void)setDataStore:(id)arg1;
-(long long)dataStoreSubtype;
-(unsigned)recipeID;
-(id<PLUniformTypeIdentifierIdentity>)uniformTypeIdentifierID;
-(id<PLResourceDataStoreKey>)dataStoreKey;
-(void)setDataStoreKey:(id)arg1;
-(long long)unorientedHeight;
-(long long)unorientedWidth;
-(void)setRecipeID:(unsigned)arg1;
-(void)setRemoteAvailability:(short)arg1;
-(short)remoteAvailability;
-(void)setUnorientedHeight:(long long)arg1;
-(void)setUnorientedWidth:(long long)arg1;
-(void)setQualitySortValue:(int)arg1;
-(int)qualitySortValue;
-(id<PLCodecIdentity>)codecID;
-(void)setDataStoreSubtype:(long long)arg1;
-(void)setUniformTypeIdentifierID:(id)arg1;
-(void)setCodecID:(id)arg1;

@end

