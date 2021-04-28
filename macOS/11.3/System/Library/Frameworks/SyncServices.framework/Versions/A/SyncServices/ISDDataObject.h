/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:30 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/SyncServices.framework/Versions/A/SyncServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ISDDataManager, NSString;

@interface ISDDataObject : NSObject {

	ISDDataManager* _dataManager;
	unsigned _anchor;
	NSString* _comment;
	ISDDataObject* _topParent;

}
-(void)dealloc;
-(void)setComment:(id)arg1 ;
-(id)comment;
-(unsigned)anchor;
-(void)setAnchor:(unsigned)arg1 ;
-(id)dataManager;
-(void)setDataManager:(id)arg1 ;
-(id)topParent;
-(void)setTopParent:(id)arg1 ;
-(char)morphInToObject:(id)arg1 ;
-(void)setValueFromObject:(id)arg1 forKey:(id)arg2 didChange:(char*)arg3 ;
-(id)anchorChildren;
-(id)fastDataManager;
@end
