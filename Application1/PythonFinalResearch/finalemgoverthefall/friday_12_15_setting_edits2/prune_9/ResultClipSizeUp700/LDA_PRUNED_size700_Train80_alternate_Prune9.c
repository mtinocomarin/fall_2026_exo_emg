// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_setting_edits2\prune_9\ResultClipSizeUp700
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_setting_edits2\ResultClipSizeUp700
// sample_size: 700
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 82.11%
// test_accuracy: 68.75%
// prune_trials_per_label: 9
// removed_trials: {'act2': ['act2\\trial_20.txt', 'act2\\trial_11.txt', 'act2\\trial_14.txt', 'act2\\trial_15.txt', 'act2\\trial_17.txt', 'act2\\trial_18.txt', 'act2\\trial_19.txt', 'act2\\trial_25.txt', 'act2\\trial_40.txt'], 'act1': ['act1\\trial_33.txt', 'act1\\trial_21.txt', 'act1\\trial_26.txt', 'act1\\trial_27.txt', 'act1\\trial_29.txt', 'act1\\trial_28.txt', 'act1\\trial_31.txt', 'act1\\trial_13.txt', 'act1\\trial_24.txt']}
// generated: 2025-12-17 12:40:31
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.678050, 0.678092,
    0.237751, -0.237774,
    0.435242, -0.435281,
    0.724147, -0.724134,
    -0.645233, 0.644975,
    0.321843, -0.321532,
    -0.080926, 0.080928,
    -0.016669, 0.016611,
    0.292621, -0.292563,
    -0.108317, 0.108208,
    -0.551818, 0.551844,
    -0.032047, 0.032090,
};

float Cg_init[2] = {
    -0.352691, -0.352688
};

float xstd_init[12] = {
    0.003986, 0.001703, 0.145461, 0.203433, 0.001121, 0.000196, 0.029180, 0.082515, 0.000681, 0.000172, 0.029026, 0.108671
};

float xmean_init[12] = {
    0.010161, -0.005819, 0.239198, 0.679198, 0.003421, -0.007758, 0.010123, 0.078863, 0.003533, -0.007729, 0.012843, 0.121271
};

