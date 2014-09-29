@interface CSRestClient : NSObject
{
id <CSRestClientDelegate> _delegate;	// 8 = 0x8
NSURL *_baseURL;	// 16 = 0x10
}
@property(retain) NSURL *baseURL; // @synthesize baseURL=_baseURL;
- (void).cxx_destruct;
- (void)delete:(id)arg1 withParameters:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)put:(id)arg1 withParameters:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)post:(id)arg1 withParameters:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)get:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)get:(id)arg1 withParameters:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)sendAsynchronousRequestWithMethod:(id)arg1 path:(id)arg2 parameters:(id)arg3 headers:(id)arg4 success:(CDUnknownBlockType)arg5 failure:(CDUnknownBlockType)arg6;
- (void)sendAsynchronousRequest:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (id)requestWithMethod:(id)arg1 path:(id)arg2 parameters:(id)arg3 headers:(id)arg4;
@property __weak id <CSRestClientDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithBaseURL:(id)arg1;
- (void)getAuthorizationHeader:(CDUnknownBlockType)arg1;
- (id)delegateUserAgent;
@end
