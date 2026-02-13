// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\prune_14\ResultClipSizeUp900
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\ResultClipSizeUp900
// sample_size: 900
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 75.98%
// test_accuracy: 53.31%
// prune_trials_per_label: 14
// removed_trials: {'act2': ['act2\\trial_33.txt', 'act2\\trial_35.txt', 'act2\\trial_37.txt', 'act2\\trial_11.txt', 'act2\\trial_23.txt', 'act2\\trial_25.txt', 'act2\\trial_39.txt', 'act2\\trial_14.txt', 'act2\\trial_21.txt', 'act2\\trial_10.txt', 'act2\\trial_19.txt', 'act2\\trial_20.txt', 'act2\\trial_22.txt', 'act2\\trial_30.txt'], 'act1': ['act1\\trial_27.txt', 'act1\\trial_25.txt', 'act1\\trial_23.txt', 'act1\\trial_33.txt', 'act1\\trial_30.txt', 'act1\\trial_26.txt', 'act1\\trial_21.txt', 'act1\\trial_12.txt', 'act1\\trial_29.txt', 'act1\\trial_31.txt', 'act1\\trial_37.txt', 'act1\\trial_40.txt', 'act1\\trial_8.txt', 'act1\\trial_1.txt']}
// generated: 2025-12-17 13:48:52
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.594793, 0.594750,
    0.343077, -0.342976,
    -0.083763, 0.083753,
    -0.141565, 0.141500,
    -0.316143, 0.316139,
    -0.330880, 0.330921,
    -0.040144, 0.040118,
    0.275842, -0.275833,
    -0.615056, 0.615124,
    0.357692, -0.357841,
    -0.000727, 0.000767,
    0.150447, -0.150402,
};

float Cg_init[2] = {
    -0.231262, -0.231267
};

float xstd_init[12] = {
    0.001109, 0.000084, 0.012621, 0.081276, 0.003319, 0.000917, 0.094760, 0.190488, 0.000897, 0.000119, 0.019398, 0.077906
};

float xmean_init[12] = {
    0.006530, -0.007685, 0.004837, 0.146144, 0.008492, -0.006856, 0.102832, 0.430785, 0.004436, -0.007707, 0.010763, 0.129870
};

