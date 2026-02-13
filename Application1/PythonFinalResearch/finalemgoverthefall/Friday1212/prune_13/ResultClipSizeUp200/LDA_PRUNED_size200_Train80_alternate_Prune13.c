// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_13\ResultClipSizeUp200
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp200
// sample_size: 200
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 94.74%
// test_accuracy: 81.25%
// prune_trials_per_label: 13
// removed_trials: {'act1': ['act1\\trial_27.txt', 'act1\\trial_21.txt', 'act1\\trial_23.txt', 'act1\\trial_30.txt', 'act1\\trial_31.txt', 'act1\\trial_35.txt', 'act1\\trial_39.txt', 'act1\\trial_40.txt', 'act1\\trial_14.txt', 'act1\\trial_17.txt', 'act1\\trial_22.txt', 'act1\\trial_33.txt', 'act1\\trial_37.txt'], 'act2': ['act2\\trial_2.txt', 'act2\\trial_10.txt', 'act2\\trial_11.txt', 'act2\\trial_12.txt', 'act2\\trial_14.txt', 'act2\\trial_18.txt', 'act2\\trial_31.txt', 'act2\\trial_6.txt', 'act2\\trial_15.txt', 'act2\\trial_16.txt', 'act2\\trial_17.txt', 'act2\\trial_19.txt', 'act2\\trial_20.txt']}
// generated: 2025-12-12 15:52:40
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.354702, 1.354713,
    -0.613395, 0.613371,
    2.141199, -2.141195,
    0.428495, -0.428491,
    3.385702, -3.385754,
    -3.152258, 3.152336,
    -0.085494, 0.085471,
    -0.260387, 0.260384,
    1.615735, -1.615745,
    -1.215779, 1.215829,
    -0.743864, 0.743853,
    0.924775, -0.924798,
};

float Cg_init[2] = {
    -1.483023, -1.483030
};

float xstd_init[12] = {
    0.003541, 0.001235, 0.101451, 0.166736, 0.001718, 0.000558, 0.030583, 0.085969, 0.000561, 0.000112, 0.020526, 0.065365
};

float xmean_init[12] = {
    0.009877, -0.006192, 0.165848, 0.576140, 0.003309, -0.007694, 0.008421, 0.054035, 0.003223, -0.007792, 0.005614, 0.074386
};

