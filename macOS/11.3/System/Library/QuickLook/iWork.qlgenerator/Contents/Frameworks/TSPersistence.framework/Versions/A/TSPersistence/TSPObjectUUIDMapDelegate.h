/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSPersistence.framework/Versions/A/TSPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TSPObjectUUIDMapDelegate <NSObject>
@required
-(id)objectUUIDMap:(id)arg1 needsObjectForIdentifier:(long long)arg2 componentIdentifier:(long long)arg3 onlyIfLoaded:(char)arg4;
-(void)objectUUIDMap:(id)arg1 didUpdateWithObjectIdentifierAddedToDocument:(long long)arg2 objectIdentifierRemovedFromDocument:(long long)arg3;

@end

