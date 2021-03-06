/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SpotlightIndexUtilities.framework/Versions/A/SpotlightIndexUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SpotlightIndexUtilities/SpotlightIndexUtilities-Structs.h>
@interface TermIndex : NSObject {

	char _coreSpotlight;
	int _flags;
	int _postings_fd;
	SIRef _index;
	unsigned long long _cindex;
	unsigned long long _base;
	const char* _name;
	unsigned long long _postings_size;
	unsigned long long* _term_ids;
	unsigned long long _term_ids_limit;
	unsigned long long _term_ids_map_size;
	unsigned long long* _doc_ids;
	unsigned long long _doc_ids_limit;
	unsigned long long _doc_ids_map_size;
	void* _groups;
	unsigned long long _groups_limit;
	unsigned long long _groups_map_size;

}

@property (nonatomic,readonly) SIRef index;                                       //@synthesize index=_index - In the implementation block
@property (nonatomic,readonly) unsigned long long cindex;                         //@synthesize cindex=_cindex - In the implementation block
@property (nonatomic,readonly) unsigned long long base;                           //@synthesize base=_base - In the implementation block
@property (nonatomic,readonly) int flags;                                         //@synthesize flags=_flags - In the implementation block
@property (nonatomic,readonly) const char* name;                                  //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) int postings_fd;                                   //@synthesize postings_fd=_postings_fd - In the implementation block
@property (nonatomic,readonly) char compact; 
@property (nonatomic,readonly) unsigned long long postings_size;                  //@synthesize postings_size=_postings_size - In the implementation block
@property (nonatomic,readonly) unsigned long long* term_ids;                      //@synthesize term_ids=_term_ids - In the implementation block
@property (nonatomic,readonly) unsigned long long term_ids_limit;                 //@synthesize term_ids_limit=_term_ids_limit - In the implementation block
@property (nonatomic,readonly) unsigned long long term_ids_map_size;              //@synthesize term_ids_map_size=_term_ids_map_size - In the implementation block
@property (nonatomic,readonly) unsigned long long* doc_ids;                       //@synthesize doc_ids=_doc_ids - In the implementation block
@property (nonatomic,readonly) unsigned long long doc_ids_limit;                  //@synthesize doc_ids_limit=_doc_ids_limit - In the implementation block
@property (nonatomic,readonly) unsigned long long doc_ids_map_size;               //@synthesize doc_ids_map_size=_doc_ids_map_size - In the implementation block
@property (nonatomic,readonly) void* groups;                                      //@synthesize groups=_groups - In the implementation block
@property (nonatomic,readonly) unsigned long long groups_limit;                   //@synthesize groups_limit=_groups_limit - In the implementation block
@property (nonatomic,readonly) unsigned long long groups_map_size;                //@synthesize groups_map_size=_groups_map_size - In the implementation block
@property (nonatomic,readonly) char coreSpotlight;                                //@synthesize coreSpotlight=_coreSpotlight - In the implementation block
-(int)flags;
-(void)dealloc;
-(id)init;
-(const char*)name;
-(SIRef)index;
-(void*)groups;
-(char)compact;
-(unsigned long long)base;
-(int)postings_fd;
-(unsigned long long)term_ids_map_size;
-(unsigned long long*)term_ids;
-(unsigned long long)groups_map_size;
-(unsigned long long)doc_ids_map_size;
-(unsigned long long*)doc_ids;
-(unsigned long long)term_ids_limit;
-(void)getPostings:(unsigned long long)arg1 block:(/*^block*/id)arg2 ;
-(unsigned char)groupForDocID:(unsigned)arg1 ;
-(id)initWithIndex:(SIRef)arg1 cindex:(long long)arg2 atPath:(const char*)arg3 coreSpotlight:(char)arg4 ;
-(unsigned long long)oidForDocID:(unsigned)arg1 ;
-(void)directoryStoreIterate:(/*^block*/id)arg1 ;
-(unsigned long long)postingCount:(unsigned long long)arg1 ;
-(void)getTerms:(/*^block*/id)arg1 ;
-(void)docIDsIterate:(/*^block*/id)arg1 ;
-(unsigned long long)cindex;
-(unsigned long long)postings_size;
-(unsigned long long)doc_ids_limit;
-(unsigned long long)groups_limit;
-(char)coreSpotlight;
@end

