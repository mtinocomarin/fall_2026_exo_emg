// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\wed1212second\prune_3\ResultClipSizeUp700
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\wed1212second\ResultClipSizeUp700
// sample_size: 700
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 82.10%
// test_accuracy: 75.00%
// prune_trials_per_label: 3
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_24.txt', 'act1\\trial_28.txt'], 'act2': ['act2\\trial_15.txt', 'act2\\trial_17.txt', 'act2\\trial_40.txt']}
// generated: 2025-12-17 17:00:18
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.295034, 0.294886,
    -0.090833, 0.091127,
    0.003123, -0.003159,
    0.089056, -0.089209,
    1.469467, -1.469379,
    -1.193111, 1.192953,
    -0.066397, 0.066438,
    0.131014, -0.130977,
    -0.527860, 0.527913,
    -0.367076, 0.367004,
    0.362549, -0.362550,
    0.809526, -0.809519,
};

float Cg_init[2] = {
    -0.369405, -0.369379
};

float xstd_init[12] = {
    0.000864, 0.000071, 0.007986, 0.062489, 0.000682, 0.000110, 0.013541, 0.050835, 0.003407, 0.001021, 0.115505, 0.207391
};

float xmean_init[12] = {
    0.005464, -0.007760, 0.002051, 0.090929, 0.002342, -0.007857, 0.004103, 0.044562, 0.009009, -0.006616, 0.131035, 0.467480
};

