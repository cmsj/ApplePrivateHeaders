/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:59 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/Versions/A/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MusicLibrary/ML3DatabaseImport.h>

@class ML3MusicLibrary, ML3MediaLibraryWriter, ML3Client;

@interface ML3ServiceDatabaseImport : ML3DatabaseImport {

	ML3MusicLibrary* _library;
	ML3MediaLibraryWriter* _writer;
	ML3Client* _client;

}

@property (nonatomic,readonly) ML3MusicLibrary * library;                   //@synthesize library=_library - In the implementation block
@property (nonatomic,readonly) ML3MediaLibraryWriter * writer;              //@synthesize writer=_writer - In the implementation block
@property (nonatomic,readonly) ML3Client * client;                          //@synthesize client=_client - In the implementation block
-(ML3Client *)client;
-(ML3MusicLibrary *)library;
-(ML3MediaLibraryWriter *)writer;
-(id)initWithDatabaseImport:(id)arg1 library:(id)arg2 writer:(id)arg3 client:(id)arg4 ;
@end

