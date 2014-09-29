@interface CSPaginatedResult : NSObject
{
BOOL _ascending;	// 8 = 0x8
NSArray *_results;	// 16 = 0x10
NSString *_orderedBy;	// 24 = 0x18
unsigned long long _page;	// 32 = 0x20
unsigned long long _pageSize;	// 40 = 0x28
unsigned long long _resultCount;	// 48 = 0x30
unsigned long long _totalResultCount;	// 56 = 0x38
unsigned long long _totalPages;	// 64 = 0x40
}
+ (id)paginatedResultOfClass:(Class)arg1 withDictionary:(id)arg2;
@property unsigned long long totalPages; // @synthesize totalPages=_totalPages;
@property unsigned long long totalResultCount; // @synthesize totalResultCount=_totalResultCount;
@property unsigned long long resultCount; // @synthesize resultCount=_resultCount;
@property unsigned long long pageSize; // @synthesize pageSize=_pageSize;
@property unsigned long long page; // @synthesize page=_page;
@property BOOL ascending; // @synthesize ascending=_ascending;
@property(copy) NSString *orderedBy; // @synthesize orderedBy=_orderedBy;
@property(retain) NSArray *results; // @synthesize results=_results;
- (void).cxx_destruct;
- (id)objectAtIndex:(unsigned long long)arg1;
@end
