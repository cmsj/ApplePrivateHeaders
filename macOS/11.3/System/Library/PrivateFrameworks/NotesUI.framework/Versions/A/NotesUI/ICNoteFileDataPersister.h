/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:33 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/Versions/A/NotesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ICDataPersister.h>

@class NSURL;

@interface ICNoteFileDataPersister : NSObject <ICDataPersister> {

	NSURL* _baseURL;

}

@property (nonatomic,retain) NSURL * baseURL;              //@synthesize baseURL=_baseURL - In the implementation block
-(id)init;
-(NSURL *)baseURL;
-(void)setBaseURL:(NSURL *)arg1 ;
-(id)urlForIdentifier:(id)arg1 ;
-(id)loadDataForIdentifier:(id)arg1 ;
-(char)saveData:(id)arg1 identifier:(id)arg2 ;
-(id)initWithNotePackageURL:(id)arg1 ;
@end
