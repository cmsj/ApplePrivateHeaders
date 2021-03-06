/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/Versions/A/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CFNetwork/CFNetwork-Structs.h>
#import <libobjc.A.dylib/NSInternalHTTPCookie2Storage.h>

@class NSURL, NSString;

@interface NSPersistentHTTPCookie2Storage : NSObject <NSInternalHTTPCookie2Storage> {

	sqlite3Ref persistentDb;
	sqlite3_stmtRef insertCookiesStmt;
	sqlite3_stmtRef selectDomainCookiesStmt;
	sqlite3_stmtRef selectAllCookiesStmt;
	sqlite3_stmtRef deleteCookiesStmt;
	sqlite3_stmtRef deleteAllCookiesStmt;
	NSURL* _path;

}

@property (retain) NSURL * path;                                    //@synthesize path=_path - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)getCookiesWithFilter:(id)arg1 ;
-(id)getAllCookies;
-(void)deleteCookies:(id)arg1 ;
-(void)deleteAllCookies;
-(void)deleteCookiesWithFilter:(id)arg1 ;
-(id)init;
-(NSURL *)path;
-(void)setPath:(NSURL *)arg1 ;
-(id)initWithPath:(id)arg1 ;
-(void)beginTransaction;
-(void)deleteCookie:(id)arg1 ;
-(void)commitTransaction;
-(void)setCookie:(id)arg1 ;
-(void)setCookies:(id)arg1 ;
@end

