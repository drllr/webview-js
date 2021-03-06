{
  'targets': [
    {
      'target_name': 'webview',
      'include_dirs': [ '<!(node -e "require(\'nan\')")' ],
      'conditions': [
        ['OS=="win"', {
          'sources': [
            'src/main.cc',
            'src/webview.h'
          ],
          'msvs_disabled_warnings': [
            4267,  # conversion from 'size_t' to 'int', possible loss of data
            4530,  # C++ exception handler used, but unwind semantics are not enabled
            4506,  # no definition for inline function
          ],
        }],
      ],
      'sources': [
            'src/main.cc',
            'src/webview.h'
      ],
    }
  ]
}
