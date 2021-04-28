/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:44 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/ICADevices.framework/Versions/A/ICADevices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ICADevices/ICADevices-Structs.h>
#import <ICADevices/ICDBaseObjectImp.h>

@interface _ICDDirectoryObject : ICDBaseObjectImp
-(void)dealloc;
-(int)count;
-(void)dump;
-(char)addChild:(id)arg1 ;
-(id)children;
-(void)removeChild:(id)arg1 ;
-(id)findObject:(unsigned)arg1 ;
-(void)handleStoreAdded;
-(void)invalidateMetaData;
-(void)removeFromTree;
-(short)newObjectCreated:(void*)arg1 completion:(/*function pointer*/void*)arg2 index:(unsigned)arg3 icaObject:(unsigned*)arg4 ;
-(void)callCleanup;
-(id)getObjectPropertyDictionary:(id)arg1 ;
-(void)addObjectInfoForTree:(id)arg1 ;
-(void)buildStandardProperties:(ICD_BulkNewPropertyPB*)arg1 index:(unsigned*)arg2 ;
-(void)createChildren:(int)arg1 ;
-(void)callBulkNewObject;
-(void)countItems:(unsigned*)arg1 ;
-(void)addObjectNameExtension:(id)arg1 ;
-(void)addObjectInfoForData:(id)arg1 ;
-(void)createAllICAProperties;
@end
